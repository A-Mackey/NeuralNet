#pragma once
#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <iostream>
#include <vector>

using namespace std;

class Matrix {
public:
	Matrix(int numRown, int numCols, bool isRandom);

	Matrix* transpose();
	double generateRandomNumber();

	void setValue(int r, int c, double v) { this->values.at(r).at(c) = v; }
	double getValue(int r, int c) { return this->values.at(r).at(c); }

	void printToConsole();

	int getNumRows() { return this->numRows; }
	int getNumCols() { return this->numCols; }
private:
	int numRows;
	int numCols;

	vector<vector<double>> values;
};

#endif // !MATRIX_HPP

