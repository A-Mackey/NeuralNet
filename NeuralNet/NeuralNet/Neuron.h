#pragma once
#ifndef NEURON_HPP
#define NEURON_HPP

#include <iostream>
#include <cmath>

using namespace std;

class Neuron {
public: 

	Neuron(double val);

	void setVal(double v);

	//Fast sigmoid function
	//f(x) = 1 / (1 + |x|)?
	void activate();

	//Derivative of fast sigmoid function is
	//f'(x) = f(x) * (1 - f(x))
	void derive();

	//Getters
	double getVal() { return this->val; }
	double getActivatedVal() { return this->activatedVal; }
	double getDerivedVal() { return this->derivedVal; }

private:
	//Can be any value
	double val;
	//0-1 (Sigmoid func (1/(1+e^-x)))
	double activatedVal;

	double derivedVal;
};

#endif
