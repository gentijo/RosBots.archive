#ifndef EXC_SUB_TIMER_H
#define EXC_SUB_TIMER_H

#include "microbot.h"

void register_timer_subscription(rclc_support_t *support, rcl_node_t *node, rclc_executor_t *executor);
void release_timer_subscription(rcl_node_t *node);

#endif