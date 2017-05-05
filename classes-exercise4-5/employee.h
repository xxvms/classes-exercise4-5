#pragma once

enum employmentType
{
	laborer, secretary, manager, marketing, accountant, director
};

class Employee
{
private:
	int employeeNo;
	double babyMoney;
	std::string name;
	employmentType workerType;
	int worker;
	
public:
	Employee() : employeeNo(0), babyMoney(0)
	{}
	void addEmployee();
	
	void viewEmployee()const;

	void employeeTypeAdd();
	void employeeTypeDisplay();
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
