/*
 * fixed-p.h
 *
 *  Created on: 2016年10月14日
 *      Author: junjie
 */

#ifndef PINTOS_SRC_THREADS_FIXED_P_H_
#define PINTOS_SRC_THREADS_FIXED_P_H_

#include <stdint.h>

typedef int32_t fixed_p;
#define INT 17
#define FRAC 14

fixed_p int_to_f(int32_t n);
int32_t f_to_int(fixed_p x);

fixed_p add_f(fixed_p x, fixed_p y);
fixed_p add_mixed(fixed_p x, int32_t n);

fixed_p sub_f(fixed_p x, fixed_p y);
fixed_p sub_mixed(fixed_p x, int32_t n);

fixed_p mul_f(fixed_p x, fixed_p y);
fixed_p mul_mixed(fixed_p x, int32_t n);

fixed_p div_f(fixed_p x, fixed_p y);
fixed_p div_mixed(fixed_p x, int32_t n);

#endif /* PINTOS_SRC_THREADS_FIXED_P_H_ */
