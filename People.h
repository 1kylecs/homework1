//Kyle Kaiser
//Homework 1
//this file is the header for the People class, and contains the constructor and getters for a persons height and name

#pragma once
#ifndef PEOPLE_H
#define PEOPLE_H
#include <string>
using namespace std;

class People 
{
private: 
	string name;
	int height;

public: 
	People(string name, int height) : name(name), height(height) {};

	string getName() const;
	int getHeight() const;

};
#endif // !PEOPLE_H

