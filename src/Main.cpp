/*
 * Main.cpp
 *
 *  Created on: 2019/03/12
 *      Author: shita
 */
#include <iostream>
#include "test.h"
using namespace std;

int Printers::count = 0;
Printers::Printers(){ ++count; }
void Printers::printStr(string str){ cout << str << endl; }
void Printers::printCount(){ cout << count << endl; }
void Printers::printNum(){ cout << "test number is:" << testNumber << endl; }

int child::new_count = 0;
child::child(){ new_count++; }

int main(){
	/*
	string input;
	cout << "please input text anything util 256 chars.\n>> ";
	cin >> input;
	int count = 0;
	cout << input;
	*/

	//cout << sum(2, 4) << endl;
	//cout << TEST_NUMBER << endl;

	Printers a;
	a.printStr("first instanse");
	a.printCount();
	a.testNumber++;
	a.printNum();

	Printers b;
	b.printStr("first instanse");
	b.printCount();
	b.printNum();

	child c;
	c.printCount();
	cout << c.new_count << endl;

	Printers *d = new Printers();
	d->printCount();
	d->printNum();

	d = &a;
	d->printCount();
	d->printNum();

	/*
	char input[3];
	cout << "Please input number 1 ~ 999\n>>";
	cin >> input;
	switch(atoi(input)){
		case 0:
			cout << "num is 0";
			break;
		case 1:
			cout << "num is 1";
			break;
		default:
			cout << "num is " << input << endl;
	}
	*/

	return 0;
}

