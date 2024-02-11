//Kyle Kaiser
//Homework 1
//this file is the implementation for the Cargo.h file

#include "Cargo.h"
#include <string>


Cargo::Cargo(string cargoType, double weight) : cargoType(cargoType), weight(weight) {}

string Cargo::getCargoType() const {
	return cargoType;
}

double Cargo::getWeight() const {
	return weight;
}
