#include <stdio.h>
#include <math.h>

#include "microbot.h"
#include "exc_sub_velocity.h"

#include "geometry_msgs/msg/twist.h"

rcl_subscription_t velocity_subscription;
geometry_msgs__msg__Twist velocity_msg;

double lin_vel_x_;
double lin_vel_y_;
double ang_vel_;
  

void sub_velocity_callback(const void * msgin)
{
	const geometry_msgs__msg__Twist *vel = (const geometry_msgs__msg__Twist *)msgin;

	printf("Received: velocity linear [%f %f %f] angular [%f %f %f]\r\n", 
	 vel->linear.x, vel->linear.y,vel->linear.z, 
	 vel->angular.x, vel->angular.y, vel->angular.z);
	
	lin_vel_x_ = vel->linear.x;
	lin_vel_y_ = vel->linear.y;
	ang_vel_ = vel->angular.z;
}

float normalizeAngle(float angle)
{
  return angle - (TWO_PI * floor((angle + PI) / (TWO_PI)));
}


void register_velocity_subscription(char *name, rcl_node_t *node, rclc_executor_t *executor)
{
	printf("Registering command velocity subscription\r\n");
	// Create subscriber.
	RCCHECK(rclc_subscription_init_default(
		&velocity_subscription,
		node,
		ROSIDL_GET_MSG_TYPE_SUPPORT(geometry_msgs, msg, Twist),
		"turtle1/cmd_vel"));

	RCCHECK(rclc_executor_add_subscription(executor, &velocity_subscription, &velocity_msg, &sub_velocity_callback, ON_NEW_DATA));
}

void release_velocity_subscription(rcl_node_t *node)
{
	// Free resources.
	RCCHECK(rcl_subscription_fini(&velocity_subscription, node));
}



