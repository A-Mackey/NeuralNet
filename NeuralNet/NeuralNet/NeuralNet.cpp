#include <iostream>
#include "Neuron.h"
#include "Matrix.h"
#include "NeuralNetwork.h"

int main()
{
    vector<int> topology;
    topology.push_back(3);
    topology.push_back(2);
    topology.push_back(3);

    vector<double> input;
    input.push_back(1.0);
    input.push_back(0.0);
    input.push_back(1.0);

    NeuralNetwork* nn = new NeuralNetwork(topology);
    nn->setCurrentInput(input);

    nn->printToConsole();



    return 0;
}
