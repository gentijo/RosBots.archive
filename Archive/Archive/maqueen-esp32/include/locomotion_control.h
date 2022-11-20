#ifndef LOCOMOTION_H
#define LOCOMOTION_H

#include "microbot.h"

void locomotion_ctrl_init(char *name, rcl_node_t *node, rclc_support_t *support, rclc_executor_t *executor);
void locomotion_drive_task(void * arg);

#endif