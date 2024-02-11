//Kyle Kaiser
//Homework 1
//This file is the header for the train and has the function to return the total weight of cargo held on the train

#ifndef TRAIN_H
#define TRAIN_H
#include "Transporters.h"
#include <vector>
using namespace std;

template<typename T>
class Train : public Transporters<T>
{
private:
	double totalWeight;

public:
	Train();

	void load(T item);
	void unload();
	void emptyAll();
	void move();
	void setTotalWeight(double weight);
	double getTotalWeight() const;
};

#endif // !TRAIN_H

