#include "list.h"
#include "employee.h"



//method that sets width of underscores
void List::setWidth(string comment)
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
		break; /*added break keyword here and below...remove?*/
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

//constructor
//List::List(){}

//the addEmployee method
Employee List::addEmployee(string empID, string fName, string lName, string email, string bDay, string hDay, int zip, string deg1, string deg2, string deg3, string job, double salary, EmployeeDepartment dept)
{
	string* degrees = new string[3];
	degrees[0] = deg1;
	degrees[1] = deg2;
	degrees[2] = deg3;

	return Employee(empID, fName, lName, email, bDay, hDay, zip, degrees, job, salary, dept);
}



//print method that displays all employees
void List::printEveryEmployee()
{
	string emp = "All The employees in the various departments.";
	cout << emp << endl;
	List::setWidth(emp);
	cout << endl;
	for (int j = 0; j < sizeof(employeeListArray) / sizeof(employeeListArray[0]); j++) {
		string empID = employeeListArray[j]->getEmployeeID();
		if (empID[0] == 'E') {
			employeeListArray[j]->print();
		}
	}
}

//method that deletes a specified employee
void List::deleteEmployee(string empID)
{
	cout << "Calling the 'deleteEmployee' method: " << endl;
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
	}
}

//print method that displays employee(s) in a specified department 
void List::printByEmployeeDepartment(EmployeeDepartment department)
{
	cout << "Employee(s) who work in this department: " << "[" << enumToDepartmentString(department) << "]" << ", are printed below: " << endl;
	cout << setfill('-') << setw(75) << "" << endl;
	for (int x = 0; x < 10; x++) {
		if (employeeListArray[x]->getDepartment() == department) {
			employeeListArray[x]->print();
		}
	}
}



//destructor
//List::~List() {}