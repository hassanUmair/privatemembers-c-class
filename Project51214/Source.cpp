



#include<iostream>
#include"employee.h"
using namespace std;

void employee::setData() {
	cout << "enter empNo" << endl;
	cin >> empNo;
	cout << "enter phoneNo" << endl;
	cin >> phoneNo;
	cout << "enter id" << endl;
	cin >> id;
}

void employee::getData() {

cout<<empNo << endl;
	cout << phoneNo << endl;
	cout << id << endl;
}
	

void employee::display() {
	cout << empNo;
	cout << phoneNo;
	cout << id;

};