/*
 * test.h
 *
 *  Created on: 2019/03/12
 *      Author: shita
 */

#ifndef DEBUG_SRC_TEST_H_
#define DEBUG_SRC_TEST_H_
#endif /* DEBUG_SRC_TEST_H_ */


#ifndef _IOSTREAM_H_
#include <iostream>
using namespace std;
#endif


#ifndef _TEST_H_
#define _TEST_H_

int sum(int, int);
#define TEST_NUMBER 100

class Printers{
public:
	static int count;
	int testNumber = 0;
	Printers();
	void printStr(string);
	static void printCount();
	void printNum();

};

class child : public Printers{
public:
	static int new_count;
	child();
};
#endif
