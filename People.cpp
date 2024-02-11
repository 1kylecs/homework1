//Kyle Kaiser
//Homework 1
//this file is the implementation for the People.h file

#include "People.h"
#include <string>


People::People(string name, int height) : name(name), height(height) {}

string People::getName() const {
	return name;
}

int People::getHeight() const {
	return height;
}
