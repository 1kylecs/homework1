//Kyle Kaiser
//Homework 1
//implementation of 'Bus.h' header, set bus fare to 0.0 by default in constructor

#include "Bus.h"
#include "People.h"
using namespace std;

template class Transporters<People>;

template<typename T>
Bus<T>::Bus() : Transporters<T>(), busFare(0.0) {}

template<typename T>
void Bus<T>::sortByHeight()
{
	
}

template<typename T>
double Bus<T>::setBusFare(double setFare)
{
	return busFare = setFare;
}

template<typename T>
double Bus<T>::getBusFare()
{
	return busFare;
}

template<typename T>
double Bus<T>::getTotalBusFare()
{
	return this.getItemCount() * getBusFare();
	
}

template<typename T>
void Bus<T>::load(const T& people)
{
	load(people);
	this.itemCount++;
	sortByHeight();
}