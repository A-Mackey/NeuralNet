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
	void setCurrentTarget(vector<double> target) { this->target = target; };
	void printToConsole();
	void feedForward();
	void setErrors();

	Matrix* getNeuronMatrix(int i) { return this->layers.at(i)->matrixifyVals(); };
	Matrix* getActivatedNeuronMatrix(int i) { return this->layers.at(i)->matrixifyActivatedVals(); };
	Matrix* getDerivedNeuronMatrix(int i) { return this->layers.at(i)->matrixifyDerivedVals(); };
	Matrix* getWeightMatrix(int i) { return this->weightMatricies.at(i); };

	void setNeuronValue(int indexLayer, int indexNeuron, double val) { this->layers.at(indexLayer)->setVal(indexNeuron, val); };

	double getTotalError() { return this->error; };
	vector<double> getErrors() { return this->errors; };
private:
	int					topologySize;
	vector<int>			topology;
	vector<Layer*>		layers;
	vector<Matrix*>		weightMatricies;
	vector<double>		input;

	vector<double>		target;
	double				error;
	vector<double>		errors;
	vector<double>		historicalErrors;
};

#endif // !NEUROAL_NETWORD_HPP

