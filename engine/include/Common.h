#pragma once
#include <iostream>

namespace algogin {
	enum class ALGOGIN_ERROR : uint8_t {
		OK,
		OUT_OF_BOUNDS,
		NOT_FOUND,
		WRONG_KEY,
		UNKNOWN_ERROR
	};

	enum class TraversalMode {
		LEVEL_ORDER
	};
}