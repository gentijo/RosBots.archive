
#include <math.h>
#include "microbot.h"

#include "geometry_msgs/msg/twist.h"


rcl_publisher_t publisher;
rcl_subscription_t subscriber;
std_msgs__msg__Int32 send_msg;
std_msgs__msg__Int32 recv_msg;


void timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
	(void) last_call_time;
	if (timer != NULL) {
		RCSOFTCHECK(rcl_publish(&publisher, &send_msg, NULL));
		printf("Sent: %d\n", send_msg.data);
		send_msg.data++;
	}
}

void subscription_callback(const void * msgin)
{
	const std_msgs__msg__Int32 * msg = (const std_msgs__msg__Int32 *)msgin;
	printf("Received: %d\n", msg->data);
}

	// Create publisher.
	RCCHECK(rclc_publisher_init_default(
		&publisher,
		&node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
		"int32_publisher"));

	// Create subscriber.
	RCCHECK(rclc_subscription_init_default(
		&subscriber,
		&node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
		"int32_subscriber"));

	// Create timer.
	rcl_timer_t timer = rcl_get_zero_initialized_timer();
	const unsigned int timer_timeout = 1000;
	RCCHECK(rclc_timer_init_default(
		&timer,
		&support,
		RCL_MS_TO_NS(timer_timeout),
		timer_callback));

	// Create executor.
	rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();
	RCCHECK(rclc_executor_init(&executor, &support.context, 2, &allocator));
	unsigned int rcl_wait_timeout = 1000;   // in ms
	RCCHECK(rclc_executor_set_timeout(&executor, RCL_MS_TO_NS(rcl_wait_timeout)));

	// Add timer and subscriber to executor.
	RCCHECK(rclc_executor_add_timer(&executor, &timer));
	RCCHECK(rclc_executor_add_subscription(&executor, &subscriber, &recv_msg, &subscription_callback, ON_NEW_DATA));

	// Spin forever.
	send_msg.data = 0;
	while(1){
		rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
		usleep(100000);
	}

	// Free resources.
	RCCHECK(rcl_subscription_fini(&subscriber, &node));
	RCCHECK(rcl_publisher_fini(&publisher, &node));
	RCCHECK(rcl_node_fini(&node));

  	vTaskDelete(NULL);


  BotController_Register(rcl_node_t &node, rclc_executor_t &executor, const std::string &real_name)
  {

    // QoS qos(rclcpp::KeepLast(7));

    // velocity_sub_ =
    //     nh_->create_subscription<geometry_msgs::msg::Twist>(
    //         real_name + "/cmd_vel",
    //         qos,
    //         std::bind(&BotController::velocityCallback, this, std::placeholders::_1));

     // create service
    rcl_service_t service;
    RCCHECK(rclc_service_init_default(&service, &node, ROSIDL_GET_SRV_TYPE_SUPPORT(example_interfaces, srv, AddTwoInts), "/addtwoints"));

    example_interfaces__srv__AddTwoInts_Response res;
    example_interfaces__srv__AddTwoInts_Request req;
    RCCHECK(rclc_executor_add_service(&executor, &service, &req, &res, service_callback));




    // pose_pub_ = nh_->create_publisher<turtlesim::msg::Pose>(real_name + "/pose", qos);

    // rotate_absolute_action_server_ =
    // rclcpp_action::create_server<turtlesim::action::RotateAbsolute>(
    //   nh,
    //   real_name + "/rotate_absolute",
    //   [](const rclcpp_action::GoalUUID &, std::shared_ptr<const turtlesim::action::RotateAbsolute::Goal>)
    //   {
    //     // Accept all goals
    //     return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
    //   },
    //   [](const std::shared_ptr<RotateAbsoluteGoalHandle>)
    //   {
    //     // Accept all cancel requests
    //     return rclcpp_action::CancelResponse::ACCEPT;
    //   },
    //   std::bind(&Turtle::rotateAbsoluteAcceptCallback, this, std::placeholders::_1));

    last_command_time_ = nh_->now();
  }

  void BotController_VelocityCallback(const geometry_msgs::msg::Twist::SharedPtr vel)
  {
    last_command_time_ = nh_->now();
    lin_vel_x_ = vel->linear.x;
    lin_vel_y_ = vel->linear.y;
    ang_vel_ = vel->angular.z;
  }

void BotController_RotateAbsoluteAcceptCallback(const std::shared_ptr<RotateAbsoluteGoalHandle> goal_handle)
{
  // Abort any existing goal
  if (rotate_absolute_goal_handle_)
  {
    RCLCPP_WARN(nh_->get_logger(), "Rotation goal received before a previous goal finished. Aborting previous goal");
    rotate_absolute_goal_handle_->abort(rotate_absolute_result_);
  }
  rotate_absolute_goal_handle_ = goal_handle;
  rotate_absolute_feedback_.reset(new turtlesim::action::RotateAbsolute::Feedback);
  rotate_absolute_result_.reset(new turtlesim::action::RotateAbsolute::Result);
  rotate_absolute_start_orient_ = orient_;
}

void BotController_Shutdown() {

// Free resources
  RCCHECK(rcl_service_fini(&service, &node));
}


static float normalizeAngle(float angle)
{
  return angle - (TWO_PI * std::floor((angle + PI) / (TWO_PI)));
}


void service_callback(const void * req, void * res){
  // example_interfaces__srv__AddTwoInts_Request * req_in = (example_interfaces__srv__AddTwoInts_Request *) req;
  // example_interfaces__srv__AddTwoInts_Response * res_in = (example_interfaces__srv__AddTwoInts_Response *) res;

  // printf("Service request value: %d + %d.\n", (int) req_in->a, (int) req_in->b);

  // res_in->sum = req_in->a + req_in->b;
}

}
