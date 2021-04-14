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
	long long phoneNumber; // e.g. 6541239879 (10 digits)
	int zipCode; // e.g. 92055
	string* collegeDegrees; // an array containing personnel degrees
	string jobTitle;
	double annualSalary;
	EmployeeDeptartment department;

public:
	//constructors
	Employee();
	/*Employee(string, string, string, string, string, string, long long, int, string*, string, double, EmployeeDeptartment);*/

	Employee(string, string, string, string, string, string, long long, int, string, double, EmployeeDeptartment);

	//destructozipcode
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
	EmployeeDeptartment getDepartment() const;


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
	void setEmployeeDepartment(EmployeeDeptartment);
};


#endif // EMPLOYEE_H
