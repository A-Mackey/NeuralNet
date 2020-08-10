#pragma once
#ifndef MULTIPLY_MATRIX_HPP
#define MULTIPLY_MATRIX_HPP

#include "Matrix.h"
#include <iostream>
#include <vector>

using namespace std;

namespace utils {
	class MultiplyMatrix {
	public:
		MultiplyMatrix(Matrix* a, Matrix* b);

		Matrix* execute();
	private:
		Matrix* a;
		Matrix* b;
		Matrix* c;

	};
}

#endif
