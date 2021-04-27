#include "employee.h"
#include <iostream>

using namespace std;

//no argument constructor
Employee::Employee(){}

//main constructor
Employee::Employee(string empID, string fName, string lName, string email, int age, EmployeeDepartment dept)
{
	employeeID = empID;
	firstName = fName;
	lastName = lName;
	emailAddress = email;
	chronologicalAge = age;
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

int Employee::getChronologicalAge() const
{
	return chronologicalAge;
}

EmployeeDepartment Employee::getDepartment() const
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

void Employee::setChronologicalAge(int age)
{
	chronologicalAge = age;
}

void Employee::setEmployeeDepartment(EmployeeDepartment dept)
{
	department = dept;
}



//method that converts enums to strings
string Employee::convertEnumToString(EmployeeDepartment department)
{
	switch (department) {
	case INFORMATION_TECHNOLOGY:
		return "Information Technology";
		break;
	case HUMAN_RESOURCES:
		return "Human Resources";
		break;
	case FINANCE:
		return "Finance";
		break;
	case LEGAL:
		return "Legal";
		break;
	case PUBLIC_RELATIONS:
		return "Public Relations";
		break;
	default:
		return "Department, not found or Invalid!";
	}
}

void Employee::print()
{
	/*cout << employeeID << "\t" <<
		"First Name: " << firstName << "\t" <<
		"Last Name: " << lastName << "\t" <<
		"Employee Department: " << convertEnumToString(department) << endl;*/
}

//************************************************************************************************************//
//method that sets width of underscores
void Employee::setWidth(string comment)
{
	int width = comment.length();
	for (int i = 0; i < width; i++) {
		cout << "-";
	}
}

//helper method that converts enum values to string
string enumToDepartmentString(EmployeeDepartment department) {
	switch (department) {
	case 0:
		return "INFORMATION_TECHNOLOGY";
		break;
	case 1:
		return "HUMAN_RESOURCES";
		break;
	case 2:
		return "FINANCE";
		break;
	case 3:
		return "LEGAL";
		break;
	case 4:
		return "PUBLIC_RELATIONS";
		break;
	default:
		return "Department, not found!";
	}
}


//print method that displays all employees
void Employee::printEveryEmployee()
{
	/*string emp = "All The employees in the various departments.";
	cout << emp << endl;
	Employee::setWidth(emp);
	cout << endl;
	for (int j = 0; j < sizeof(employeeListArray) / sizeof(employeeListArray[0]); j++) {
		string empID = employeeListArray[j]->getEmployeeID();
		if (empID[0] == 'E') {
			employeeListArray[j]->print();
		}
	}*/
}

//method that deletes a specified employee
void Employee::deleteEmployee(string empID)
{
	/*cout << "Calling the 'deleteEmployee' method: " << endl;
	int d;
	for (d = 0; d < sizeof(employeeListArray) / sizeof(employeeListArray[0]); d++) {
		string _empID = employeeListArray[d]->getEmployeeID();
		if (_empID == empID) {
			cout << "The specified employee is not found!!!" << endl;
		}
		if (employeeListArray[d]->getEmployeeID == empID) {
			employeeListArray[d]->setEmployeeID("");
			cout << "The specified employee has been deleted!!!" << endl;
		}
	}*/
}

//print method that displays employee(s) in a specified department 
void Employee::printByEmployeeDepartment(EmployeeDepartment department)
{
	/*cout << "Employee(s) who work in this department: " << "[" << enumToDepartmentString(department) << "]" << ", are printed below: " << endl;
	cout << setfill('-') << setw(75) << "" << endl;
	for (int x = 0; x < 10; x++) {
		if (employeeListArray[x]->getDepartment() == department) {
			employeeListArray[x]->print();
		}
	}*/
}

//print method that displays employee(s) with invalid emails
void Employee::printIncorrectEmails()
{
}