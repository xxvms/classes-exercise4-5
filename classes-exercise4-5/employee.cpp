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
	std::cout << std::endl;
}

void Employee::viewEmployee()const
{
	std::cout << "this are details for your champ!" << std::endl;
	std::cout << "Mugwump Number: " << employeeNo << std::endl;
	std::cout << "Mugwump Name: " << name << std::endl;
	std::cout << "Katchin for this Mugwump: " << babyMoney << std::endl;
	std::cout << std::endl;
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
	std::cout << "Date: ";
	std::cout << day << "/" << month << "/" << year << std::endl;
}