#pragma once

class Employee
{
private:
	int employeeNo;
	double babyMoney;
	std::string name;
public:
	Employee() : employeeNo(0), babyMoney(0)
	{}
	void addEmployee();
	
	void viewEmployee()const;
};

class Date
{
private:
	int year;
	int month;
	int day;
public:
	void getDate();
	void showDate()const;
};
