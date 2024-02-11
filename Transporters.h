//Kyle Kaiser
//Homework 1
//This is the header file for the transporters implementation class, and defines the variable and functions that will be used in the implementation class

// #pragma once
#ifndef TRANSPORTER_H
#define TRANSPORTER_H
#include <string>
#include <vector>
using namespace std;

template<typename T>
class Transporters
{
public:

	int itemCount;
	string nextDestination;
	vector<T> items;

	Transporters(string nextDestination);

	void load(T item);
	void unload();
	void emptyAll();
	void move();
	bool isEmpty() const;
	int getItemCount();
	string getNextDestination();
	vector<T> getItems();
};

#endif // !TRANSPORTER_H