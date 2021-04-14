#include "employee.h"

//no argument constructor
Employee::Employee(){}

//main constructor
//Employee::Employee(string ID, string fName, string lName, string email, string bDay, string hDay, long long phone, int zip, string* degrees, string job, double salary, EmployeeDeptartment dept)

Employee::Employee(string ID, string fName, string lName, string email, string bDay, string hDay, long long phone, int zip, string job, double salary, EmployeeDeptartment dept)
{
	employeeID = ID;
	firstName = fName;
	lastName = lName;
	emailAddress = email;
	birthDay = bDay;
	hireDate = hDay;
	phoneNumber = phone;
	zipCode = zip;
	//collegeDegrees = degrees;
	jobTitle = job;
	annualSalary = salary;
	department = dept;

}

//destructor
Employee::~Employee()
{
}

//accessor methods implementation
string Employee::getEmployeeID() const
{
	return employeeID;
}

string Employee::getFirstName() const
{
	return firstName;
}

string Employee::getLastName() const
{
	return lastName;
}

string Employee::getEmailAddress() const
{
	return emailAddress;
}

string Employee::getBirthDay() const
{
	return birthDay;
}

string Employee::getHireDate() const
{
	return hireDate;
}

long long Employee::getPhoneNumber() const
{
	return phoneNumber;
}

int Employee::getZipCode() const
{
	return zipCode;
}

string* Employee::getCollegeDegrees() const
{
	return collegeDegrees;
}

string Employee::getJobTitle() const
{
	return jobTitle;
}

double Employee::getAnnualSalary() const
{
	return annualSalary;
}

EmployeeDeptartment Employee::getDepartment() const
{
	return department;
}

//mutator methods implementation
void Employee::setEmployeeID(string ID)
{
	employeeID = ID;
	return;
}

void Employee::setFirstName(string fName)
{
	firstName = fName;
	return;
}

void Employee::setLastName(string lName)
{
	lastName = lName;
	return;
}

void Employee::setEmailAddress(string email)
{
	emailAddress = email;
	return;
}

void Employee::setBirthDay(string bDay)
{
	birthDay = bDay;
	return;
}

void Employee::setHireDate(string hDay)
{
	hireDate = hDay;
	return;
}

void Employee::setPhoneNumber(long long phone)
{
	phoneNumber = phone;
	return;
}

void Employee::setZipCode(int zip)
{
	zipCode = zip;
	return;
}

void Employee::setCollegeDegrees(string* degrees)
{
	collegeDegrees = degrees;
	return;
}

void Employee::setJobTitle(string job)
{
	jobTitle = job;
	return;
}

void Employee::setAnnualSalary(double salary)
{
	annualSalary = salary;
	return;
}

void Employee::setEmployeeDepartment(EmployeeDeptartment dept)
{
	department = dept;
}