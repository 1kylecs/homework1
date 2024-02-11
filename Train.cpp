//Kyle Kaiser
//Homework 1
//this is the implementation of the train header file, and calculates the total weight of the cargo in the vector

#include "Train.h"
#include "Cargo.h"
#include <vector>
using namespace std;

template class Train<Cargo>;

template<typename Cargo>
Train<Cargo>::Train()
{
	totalWeight = 0;
}

template<typename Cargo>
void Train<Cargo>::load(Cargo item)
{
	this->items.push_back(item);
	this->itemCount++;
	setTotalWeight(totalWeight + item.getWeight());
}

template<typename Cargo>
void Train<Cargo>::unload()
{
	this->itemCount = this->itemCount == 0 ? 0 : this->itemCount - 1;
	Cargo unloaded = this->items.pop_back();
	totalWeight -= unloaded.weight;
}

template<typename Cargo>
void Train<Cargo>::emptyAll()
{
	this->itemCount = 0;
	this->items.clear();
	totalWeight = 0;
}

template<typename Cargo>
void Train<Cargo>::move()
{
	printf("We have reached %s", this->getNextDestination());
}

template<typename Cargo>
void Train<Cargo>::setTotalWeight(double weight)
{
	totalWeight = weight;
}

template<typename Cargo>
double Train<Cargo>::getTotalWeight() const
{
	return totalWeight;
}


