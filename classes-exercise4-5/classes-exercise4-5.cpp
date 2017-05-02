// classes-exercise4-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "employee.h"



int main()
{
	Employee emp1, emp2, emp3;
	Date d1, d2, d3;

	emp1.addEmployee();
	d1.getDate();
	emp2.addEmployee();
	d2.getDate();
	emp3.addEmployee();
	d3.getDate();

	system("cls");
	emp1.viewEmployee();
	d1.showDate();
	std::cout << std::endl;
	emp2.viewEmployee();
	d2.showDate();
	std::cout << std::endl;
	emp3.viewEmployee();
	d3.showDate();
	std::cout << std::endl;
	system("pause");
	return 0;
}

