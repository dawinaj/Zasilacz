#pragma once
#include "COMMON.h"

// #include <atomic>
// #include <limits>
// #include <cmath>
// #include <functional>

//

#define FRONTEND_MEM (16 * 1024)
#define FRONTEND_PRT (12) // must be lower than 18 of LwIP ???

//

namespace Frontend
{
	constexpr const char *const TAG = "Frontend";

	esp_err_t init();
	esp_err_t deinit();

	esp_err_t give_sem_emergency();

	esp_err_t test();
};