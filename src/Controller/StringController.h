/*
 * StringController.h
 *
 *  Created on: Jan 25, 2016
 *      Author: emad6932
 */

#include <string>
using namespace std;
#ifndef STRINGCONTROLLER_H_
#define STRINGCONTROLLER_H_


class StringController
{
private:
	string count;
	string comstring;
public:
	StringController();
	void setString(string);
	string getString();
	void start();
};



#endif /* STRINGCONTROLLER_H_ */
