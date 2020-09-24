



// Lecture4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"employee.h"
using namespace std;

int main()
{
	employee emp[2], e1;
	int id;
	
		for (int i = 0; i < 2; i++)
		{
			emp[i].setData();
		}

		for (int i = 0; i < 2; i++)
		{
			emp[i].getData();
		}

		e1.display();



	}

	


