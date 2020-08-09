#pragma once
#ifndef LAYER_HPP
#define LAYER_HPP

#include <iostream>
#include <cmath>
#include "Neuron.h"
#include "Matrix.h"
#include <vector>

using namespace std;

class Layer {
public:

	Layer(int size);

	void setVal(int i, double v);

	Matrix* matrixifyVals();
	Matrix* matrixifyActivatedVals();
	Matrix* matrixifyDerivedVals();

private:
	int size;

	vector<Neuron*> neurons;
};

#endif
