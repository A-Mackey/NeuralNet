#define _USE_MATH_DEFINES

#include "Neuron.h"
#include <cmath>

using namespace std;

Neuron::Neuron(double val) {
	this->val = val;
	activate();
	derive();
}

void Neuron::setVal(double val) {
	this->val = val;
	activate();
	derive();
}

//Fast sigmoid function
//f(x) = 1 / (1 + |x|)?
void Neuron::activate() {
	this->activatedVal = this->val / (1 + std::abs(this->val));
}

//Derivative of fast sigmoid function is
//f'(x) = f(x) * (1 - f(x))
void Neuron::derive() {
	this->derivedVal = this->activatedVal * (1 - this->activatedVal);
}