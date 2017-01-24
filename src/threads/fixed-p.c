/*
 * fixed-p.c
 *
 *  Created on: 2016年10月14日
 *      Author: junjie
 */

#include "fixed-p.h"

static const int32_t f = (1 << FRAC);

fixed_p int_to_f(int32_t n){
	return n * f;
}

int32_t f_to_int(fixed_p x){
	return x >= 0 ? (x + f/2) >> FRAC : (x - f/2) >> FRAC;
}

fixed_p add_f(fixed_p x, fixed_p y){
	return x + y;
}

fixed_p add_mixed(fixed_p x, int32_t n){
	return x + (n << FRAC);
}

fixed_p sub_f(fixed_p x, fixed_p y){
	return x - y;
}

fixed_p sub_mixed(fixed_p x, int32_t n){
	return x - (n << FRAC);
}

fixed_p mul_f(fixed_p x, fixed_p y){
	int64_t result = ((int64_t)x) * y;
	result >>= FRAC;
	return (int32_t)result;
}

fixed_p mul_mixed(fixed_p x, int32_t n){
	return x * n;
}

fixed_p div_f(fixed_p x, fixed_p y){
	int64_t result = ((int64_t)x) << FRAC;
	result /= y;
	return (int32_t)result;
}

fixed_p div_mixed(fixed_p x, int32_t n){
	return x / n;
}
