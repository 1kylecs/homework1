//Kyle Kaiser
//Homework 1
//this is the header file for the cargo class, and has the weight and type for cargo for the train and will have the getters and the constructor for the cargo

#pragma once
#ifndef CARGO_H
#define CARGO_H
#include <string>
using namespace std;

class Cargo
{
private:
	string cargoType;
	double weight;

public:
	Cargo(string cargoType, double weight);

	string getCargoType() const;
	double getWeight() const;
};

#endif
