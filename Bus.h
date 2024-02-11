//Kyle Kaiser
//Homework 1
/*this is the header for the bus class, and has the getter for the total bus fare, the setter for the price of the bus fare, and overloaded load() method, and a sorting method so
that passengers are loaded by height when entered into the vector */

#pragma once
#ifndef BUS_H
#define BUS_H
#include "People.h"
#include "Transporters.h"
#include <algorithm>
#include <vector>

template<typename T>
class Bus : public Transporters<T>
{
private:
	double busFare;
	double totalBusFare;

public:
	Bus();
	
	void sortByHeight();
	double setBusFare(double busFare);
	double getBusFare();
	double getTotalBusFare();
	double setTotalBusFare(double busFare);
	void load(const T& people);
	void unload();
	void emptyAll();
};

#endif // !BUS_H

