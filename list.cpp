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

//method that converts enum values to string
string enumToDegreeString(EmployeeDeptartment department) {
	switch (department) {
	case 0:
		return "INFORMATION_TECHNOLOGY";
		break; //added break keyword here and below...
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
List::List(){}

//the addEmployee method
Employee List::addEmployee(string empID, string fName, string lName, string email, string bDay, string hDay, long long phone, int zip, string deg1, string deg2, string deg3, string job, double salary, EmployeeDeptartment dept)
{
	string* degrees = new string[3];
	degrees[0] = deg1;
	degrees[1] = deg2;
	degrees[2] = deg3;

	return Employee(empID, fName, lName, email, bDay, hDay, phone, zip, degrees, job, salary, dept);
}



//destructor
List::~List() {}