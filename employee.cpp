#include "employee.h"
#include <iostream>

using namespace std;

//no argument constructor
Employee::Employee() {}

//main constructor
Employee::Employee(string empID, string fName, string lName, string email, int age, EmployeeDepartment dept) {
    employeeID = empID;
    firstName = fName;
    lastName = lName;
    emailAddress = email;
    chronologicalAge = age;
    department = dept;
}

//destructor
Employee::~Employee() {
}

//accessor methods implementation
string Employee::getEmployeeID() const {
    return employeeID;
}

string Employee::getFirstName() const {
    return firstName;
}

string Employee::getLastName() const {
    return lastName;
}

string Employee::getEmailAddress() const {
    return emailAddress;
}

int Employee::getChronologicalAge() const {
    return chronologicalAge;
}

EmployeeDepartment Employee::getDepartment() const {
    return department;
}

//mutator methods implementation
void Employee::setEmployeeID(string ID) {
    employeeID = ID;
    return;
}

void Employee::setFirstName(string fName) {
    firstName = fName;
    return;
}

void Employee::setLastName(string lName) {
    lastName = lName;
    return;
}

void Employee::setEmailAddress(string email) {
    emailAddress = email;
    return;
}

void Employee::setChronologicalAge(int age) {
    chronologicalAge = age;
}

void Employee::setEmployeeDepartment(EmployeeDepartment dept) {
    department = dept;
}


//helper method that converts enum values to string
string Employee::convertEnumToDepartmentString(EmployeeDepartment department) {
    switch (department) {
        case 0:
            return "Information Technology";
            break;
        case 1:
            return "Human Resources";
            break;
        case 2:
            return "Finance";
            break;
        case 3:
            return "Legal";
            break;
        case 4:
            return "Public Relations";
            break;
        default:
            return "Department, not found!";
    }
}

void Employee::listTableHeading() {

    string heading1 = "[Employee ID]\t\t";
    string heading2 = "[First Name]\t\t";
    string heading3 = "[Last Name]\t\t";
    string heading4 = "[Age]\t\t";
    string heading5 = "[Employee Department]";
    string title = heading1 + heading2 + heading3 + heading4 + heading5;

    cout << title << endl;
}

//method that prints a single employee
void Employee::printAnEmployee(Employee emp) {

    cout << emp.getEmployeeID() << "\t\t\t"
         << emp.getFirstName() << "\t\t\t"
         << emp.getLastName() << "\t\t\t"
         << emp.getChronologicalAge() << "\t\t\t"
         << convertEnumToDepartmentString(emp.getDepartment()) << endl;
}



//print method that displays all employees
void Employee::printEveryEmployee(Employee emp[]) {
    string heading = "All The employees in the various departments.";
    cout << heading << endl;
    Employee::setWidth(heading);
    cout << endl;
    Employee::listTableHeading(); //calling the heading method
    for (int j = 0; j < 10; j++) {
        if (emp[j].getEmployeeID() != "") {
            emp[j].printAnEmployee(emp[j]);
        }
    }
    cout << endl;
}

void Employee::deleteEmployee(Employee e[], string ID) {
    cout << "\nCalling the 'deleteEmployee' method for: " << ID << endl;
    int i;
    int size = 10;
    int noEmployee = 0;

    for (i = 0; i < size; i++) {
        if (e[i].getEmployeeID() == ID) {
            e[i].setEmployeeID("");
            cout << "The employee with ID: [" << ID << "] has been deleted!!!\n" << endl;
            return;
        }
    }
        for (i = 0; i < size; i++) {
            if (e[i].getEmployeeID() != ID) {
                noEmployee += 1;
                if (noEmployee == 1) {
                    cout << "Employee, not found!!!\n" << endl;
                }
            }
        }
    }

//method that sets width of underscores
    void Employee::setWidth(string comment) {
        int width = comment.length();
        for (int i = 0; i < width; i++) {
            cout << "-";
        }
    }



//print method that displays employee(s) in a specified department 
void Employee::printByEmployeeDepartment(Employee e[], EmployeeDepartment department)
{
    int size = 10;
	cout << "\nEmployee(s) who work in " << "[" << convertEnumToDepartmentString(department) << "]" << ", are printed below: " << endl;
	cout << setfill('-') << setw(80) << "" << endl;
	for (int x = 0; x < size; x++) {
		if ((e[x].getDepartment() == department) && (e[x].getEmployeeID() != "")) {
			e[x].printAnEmployee(e[x]);
		}
	}
}




