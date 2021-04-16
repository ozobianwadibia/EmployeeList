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
	string employeeID; // e.g. EN001
	string firstName;
	string lastName;
	string emailAddress; // e.g. kill_parasites@live.com
	string birthDay; // e.g. 16 April 2001
	string hireDate; // e.g. 15 March 2003
	//long long phoneNumber; 
	int zipCode; // e.g. 92055
	string* collegeDegrees; // an array containing personnel degrees
	string jobTitle;
	double annualSalary;
	EmployeeDepartment department;


public:
	//constructors
	Employee();
	Employee(string, string, string, string, string, string, int, string*, string, double, EmployeeDepartment);


	//destructor
	~Employee();

	//accessor methods
	string getEmployeeID() const;
	string getFirstName() const;
	string getLastName() const;
	string getEmailAddress() const;
	string getBirthDay() const;
	string getHireDate() const;
	long long getPhoneNumber() const;
	int getZipCode() const;
	string* getCollegeDegrees() const; // dynamic array
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
	void setPhoneNumber(long long);
	void setZipCode(int);
	void setCollegeDegrees(string*); // dynamic array
	void setJobTitle(string);
	void setAnnualSalary(double);
	void setEmployeeDepartment(EmployeeDepartment);

public:
	void print();
	//void initPrint(); return to me later
	string convertEnumToString(EmployeeDepartment department);
};


#endif // EMPLOYEE_H
