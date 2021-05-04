#pragma once

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include "department.h"

#include <iostream>
#include <sstream>
#include <string>
#include <ios>
#include <iomanip>
#include <cstdlib>


using namespace std;

class Employee {
	
private:
	string employeeID; 
	string firstName;
	string lastName;
	string emailAddress; 
	int chronologicalAge;
	EmployeeDepartment department;


public:
	//constructors
	Employee();
	Employee(string, string, string, string, int, EmployeeDepartment);

	//destructor
	~Employee();

	//accessor methods
	string getEmployeeID() const;
	string getFirstName() const;
	string getLastName() const;
	string getEmailAddress() const;
	int getChronologicalAge() const;
	EmployeeDepartment getDepartment() const;


	//mutator methods
	void setEmployeeID(string);
	void setFirstName(string);
	void setLastName(string);
	void setEmailAddress(string);
	void setChronologicalAge(int);
	void setEmployeeDepartment(EmployeeDepartment);

public:
    //helper function to convert enums to string
    string convertEnumToString(EmployeeDepartment department);

    //prints one employee
    void printAnEmployee(Employee);

	//prints out all the employees
	void printEveryEmployee(Employee[]);

	//sets width
	void setWidth(string);

    //deletes an employee from the list
	void deleteEmployee(Employee[], string); //employeeID

	//prints out employees by department
	void printByEmployeeDepartment(Employee[], EmployeeDepartment department);


};

#endif // EMPLOYEE_H
