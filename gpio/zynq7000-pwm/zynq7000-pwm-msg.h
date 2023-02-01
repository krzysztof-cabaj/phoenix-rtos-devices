/*
 * Phoenix-RTOS
 *
 * Xilinx Zynq 7000 PWM driver binary interface
 *
 * Copyright 2023 Phoenix Systems
 * Author: Aleksander Kaminski
 *
 * This file is part of Phoenix-RTOS.
 *
 * %LICENSE%
 */

#ifndef ZYNQ7000_PWM_MSG_H
#define ZYNQ7000_PWM_MSG_H

#include <stdint.h>
#include <sys/msg.h>


int zynq7000pwm_set(oid_t *oid, uint32_t compval[8], uint8_t mask);


int zynq7000pwm_get(oid_t *oid, uint32_t compval[8]);


#endif
