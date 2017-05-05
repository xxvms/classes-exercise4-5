#include "stdafx.h"
#include <iostream>
#include "employee.h"
#include <string>

void Employee::addEmployee()
{
	std::cout << "Adding new Mugwump" << std::endl;
	std::cout << "Please kindly..... provide " << std::endl;
	std::cout << "Mugwump Number: ";
	std::cin >> employeeNo;
	std::cout << "Mugwump Name: ";
	std::cin >> name;
	std::cout << "Katchin!!!: ";
	std::cin >> babyMoney;
}

void Employee::viewEmployee()const
{
	std::cout << "this are details for your champ!" << std::endl;
	std::cout << "Mugwump Number: " << employeeNo << std::endl;
	std::cout << "Mugwump Name: " << name << std::endl;
	std::cout << "Katchin for this Mugwump: " << babyMoney << std::endl;
	std::cout << std::endl;
}

void Employee::employeeTypeAdd()
{
	std::cout << "Employment type: " << std::endl;
	std::cout << "0 - laborer, 1 - secretary, 2 - manager, 3 - marketing, 4 - accountant, 5 - director: ";
	std::cin >> worker;
	std::cout << std::endl;
	

}
void Employee::employeeTypeDisplay()
{
	switch (worker)
	{
	case 0: std::cout << "Type of employment: laborer" << std::endl; break;
	case 1: std::cout << "Type of employment: secretary" << std::endl; break;
	case 2: std::cout << "Type of employment: manager" << std::endl; break;
	case 3: std::cout << "Type of employment: marketing" << std::endl; break;
	case 4: std::cout << "Type of employment: accountant" << std::endl; break;
	case 5: std::cout << "Type of employment: director" << std::endl; break;
	}
}

void Date::getDate()
{
	std::cout << "Please provide date when Mugwump starts: " << std::endl;
	std::cout << "Day as DD: ";
	std::cin >> day;
	std::cout << "Month as MM: ";
	std::cin >> month;
	std::cout << "Year as YYYY: ";
	std::cin >> year;
	std::cout << std::endl;
}
void Date::showDate() const
{
	std::cout << "Start date: ";
	std::cout << day << "/" << month << "/" << year << std::endl;
}