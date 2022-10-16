
#include "exc_sub_timer.h"
#include "maqueen_motor.h"

void timer_callback(rcl_timer_t * timer, int64_t last_call_time)
{
	// if (timer != NULL) {
	// 	printf("Timer Callback\n");
	// }
}

// Create timer.
rcl_timer_t timer;
const unsigned int timer_timeout = 1000;

void register_timer_subscription(rclc_support_t *support, rcl_node_t *node, rclc_executor_t *executor)
{
	timer = rcl_get_zero_initialized_timer();
	RCCHECK(rclc_timer_init_default(
		&timer,
		support,
		RCL_MS_TO_NS(timer_timeout),
		timer_callback));

	unsigned int rcl_wait_timeout = 1000;   // in ms
	RCCHECK(rclc_executor_set_timeout(executor, RCL_MS_TO_NS(rcl_wait_timeout)));

	// Add timer and subscriber to executor.
	RCCHECK(rclc_executor_add_timer(executor, &timer));
}

void release_timer_subscription(rcl_node_t *node)
{
	// Free resources.
//	RCCHECK(rcl_subscription_fini(&velocity_subscription, node));
}



