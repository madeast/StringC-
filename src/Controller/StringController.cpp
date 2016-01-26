/*
 * StringController.cpp
 *
 *  Created on: Jan 25, 2016
 *      Author: emad6932
 */

#include "StringController.h"
#include <iostream>
#include <string>
using namespace std;

StringController :: StringController()
{
	this->count = "HI";
}

void StringController :: setString(string count)
{
	this->count = count;
}

string StringController :: getString()
{
	return this->count;
}

void StringController :: start()
{
	cout << "This is the String I've created." << endl;
	cout << getString() << "is the String right now." << endl;
	cout << "Type in a new String please." << endl;
	string tempString;
	cin >> tempString;
	cout << tempString.substr(0) << endl;
	setString(tempString);
	cout << getString() << " is the updated String." << endl;

	if(!count.compare(tempString))
	{
		cout << "Your Strings match." << endl;
	}
	else
	{
		cout << "Your Strings don't match." << endl;
	}
}

