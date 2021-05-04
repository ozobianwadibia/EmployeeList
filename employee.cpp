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


//method that converts enums to strings
string Employee::convertEnumToString(EmployeeDepartment department) {
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

//method that prints a single employee
void Employee::printAnEmployee(Employee emp) {
    string heading1 = "[Employee ID]: ";
    string heading2 = "[First Name]: ";
    string heading3 = "[Last Name]: ";
    string heading4 = "[Employee Department]: ";

    cout << heading1 << emp.getEmployeeID() << "\t" <<
            heading2 << emp.getFirstName() << "\t" <<
            heading3 << emp.getLastName() << "\t" <<
            heading4 << convertEnumToString(emp.getDepartment()) << endl;
}


//print method that displays all employees
void Employee::printEveryEmployee(Employee emp[]) {
    string heading = "All The employees in the various departments.";
    cout << heading << endl;
    Employee::setWidth(heading);
    cout << endl;
    for (int j = 0; j < 10; j++) {
        if (emp[j].getEmployeeID() != "") {
            emp[j].printAnEmployee(emp[j]);
        }
    }
    cout << endl;
}

void Employee::deleteEmployee(Employee e[], string ID) {
    cout << "Calling the 'deleteEmployee' method for: " << ID << endl;
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

//print method that displays employee(s) in a specified department 
void Employee::printByEmployeeDepartment(Employee e[], EmployeeDepartment department)
{
    int size = 10;
	cout << "Employee(s) who work in this department: " << "[" << enumToDepartmentString(department) << "]" << ", are printed below: " << endl;
	cout << setfill('-') << setw(80) << "" << endl;
	for (int x = 0; x < size; x++) {
		if (e[x].getDepartment() == department) {
			e[x].printAnEmployee(e[x]);
		}
	}
}




