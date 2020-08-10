#pragma once
#ifndef MATRIX_TO_VECTOR_HPP
#define MATRIX_TO_VECTOR_HPP

#include <iostream>
#include <vector>
#include <assert.h>
#include "Matrix.h"

using namespace std;

namespace utils {
	class MatrixToVector {
	public:
		MatrixToVector(Matrix *a);

		vector<double> execute();
	private:
		Matrix* a;
	};
}

#endif