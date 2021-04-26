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
#include <typeinfo>

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

	Employee *employeeListArray[10];


	//destructor
	~Employee();

	//accessor methods
	string getEmployeeID() const;
	string getFirstName() const;
	string getLastName() const;
	string getEmailAddress() const;
	string getBirthDay() const;
	string getHireDate() const;
	int getZipCode() const;
	string* getCollegeDegrees() const; // dynamic array
	//GETTER METHOD for degreetime!!!
	string getJobTitle() const;
	double getAnnualSalary() const;
	EmployeeDepartment getDepartment() const;


	//mutator methods
	void setEmployeeID(string);
	void setFirstName(string);
	void setLastName(string);
	void setEmailAddress(string);
	void setBirthDay(string);
	void setHireDate(string);
	void setZipCode(int);
	void setCollegeDegrees(string*); // dynamic array
	//SETTER METHOD for degreetime!!!
	void setJobTitle(string);
	void setAnnualSalary(double);
	void setEmployeeDepartment(EmployeeDepartment);

public:
	void print();
	//void initPrint(); return to me later
	string convertEnumToString(EmployeeDepartment department);

	//adds an employee
	void addEmployee(string, string, string, string, int, EmployeeDepartment);

	//prints out all the employees
	void printEveryEmployee();

	//sets width
	void setWidth(string); //find out which string

	//deletes an employee from the list
	void deleteEmployee(string); //employeeID

	//prints out employees by department
	void printByEmployeeDepartment(EmployeeDepartment department);


	//prints out bad emails
	//void printIncorrectEmails();
};


#endif // EMPLOYEE_H
