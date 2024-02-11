//Kyle Kaiser
//Homework 1
//This file is the parent class for bus and train, and has templated functions so that bus and train can use them

#include "Transporters.h"
#include "Cargo.h"

template class Transporters<Cargo>;
template class Transporters<int>;

template<typename T>
Transporters<T>::Transporters(string nD)
{
	itemCount = 0;
	nextDestination = nD;
	items = {};
}

template<typename T>
void Transporters<T>::load(T item)
{
	itemCount++;
	items.push_back(item);
}

template<typename T>
void Transporters<T>::unload()
{
	itemCount = itemCount == 0 ? 0 : itemCount - 1;
	items.pop_back();
}

template<typename T>
void Transporters<T>::emptyAll()
{
	itemCount = 0;
	items.clear();
}

template<typename T>
void Transporters<T>::move()
{
	printf("We have reached %s", getNextDestination());
}

template<typename T>
bool Transporters<T>::isEmpty() const
{
	return itemCount == 0;
}

template<typename T>
int Transporters<T>::getItemCount()
{
	return itemCount;
}

template<typename T>
string Transporters<T>::getNextDestination()
{
	return nextDestination;
}

template<typename T>
vector<T> Transporters<T>::getItems()
{
	return items;
}