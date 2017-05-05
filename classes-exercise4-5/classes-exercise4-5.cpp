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
	emp1.employeeTypeAdd();
	d1.getDate();
	emp2.addEmployee();
	emp2.employeeTypeAdd();
	d2.getDate();
	emp3.addEmployee();
	emp3.employeeTypeAdd();
	d3.getDate();

	system("cls");
	emp1.viewEmployee();
	emp1.employeeTypeDisplay();
	d1.showDate();
	std::cout << std::endl;
	emp2.viewEmployee();
	emp2.employeeTypeDisplay();
	d2.showDate();
	std::cout << std::endl;
	emp3.viewEmployee();
	emp3.employeeTypeDisplay();
	d3.showDate();
	std::cout << std::endl;
	system("pause");
	return 0;
}

