#pragma once
#ifndef NEURAL_NETWORK_HPP
#define NEURAL_NETWORK_HPP

#include "Layer.h"
#include "Matrix.h"
#include "Neuron.h"
#include <iostream>
#include <vector>

using namespace std;

class NeuralNetwork {
public:
	NeuralNetwork(vector<int> topology);
	void setCurrentInput(vector<double> input);

	void printToConsole();
private:
	int					topologySize;
	vector<int>			topology;
	vector<Layer*>		layers;
	vector<Matrix*>		weightMatricies;
	vector<double>		input;
};

#endif // !NEUROAL_NETWORD_HPP

