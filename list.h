#pragma once

#ifndef LIST_H
#define LIST_H

#include "department.h"
#include "employee.h"


using namespace std;

class List {

public:
	//constructor
	List();

	//destructor
	~List();

	//the employee object array
	Employee* employeeListArray[10];

	//main functions

	//adds an employee
	Employee addEmployee(string, string, string, string, string, string, long long, int, string, string, string, string, double, EmployeeDeptartment);

	//prints out all the employees
	void printEveryEmployee();
	//prints out bad emails
	void printIncorrectEmails();
	//prints out employees by department
	void printByEmployeeDepartment(EmployeeDeptartment department);
	//deletes an employee from the list
	void deleteEmployee(string); //employeeID
	//sets width
	void setWidth(string); //find out which string

};










#endif // LIST_H
