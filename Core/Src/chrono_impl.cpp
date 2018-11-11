/*
 * chrono_impl.c
 *
 *  Created on: Nov 10, 2018
 *      Author: Benjamin
 */
#include <chrono>
#include "stm32f3xx_hal.h"
namespace std{
namespace chrono{
	system_clock::time_point system_clock::now() noexcept{
		return system_clock::time_point(milliseconds(HAL_GetTick()));
	}
}
}



