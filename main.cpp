
#include "employee.h"

using namespace std;

//helper method that converts strings to enum
EmployeeDepartment stringsToEnum(const string& deptStrings) {
    if (deptStrings == "INFORMATION_TECHNOLOGY") {
        return INFORMATION_TECHNOLOGY;
    }
    else if (deptStrings == "HUMAN_RESOURCES") {
        return HUMAN_RESOURCES;
    }
    else if (deptStrings == "FINANCE") {
        return FINANCE;
    }
    else if (deptStrings == "LEGAL") {
        return LEGAL;
    }
    else if (deptStrings == "PUBLIC_RELATIONS") {
        return PUBLIC_RELATIONS;
    }
}

//helper method that processes strings
string* refine(string row) {
    const int ROW_SIZE = 14;
    string* containerArray = new string[ROW_SIZE];
    int i = 0;

    stringstream rowStream(row);
    while (rowStream.good()) {
        string substr;
        getline(rowStream, substr, ',');
        containerArray[i] = substr;
        i++;
    }

    return containerArray;
}


//main program

int main()
{
    cout << "Delimiter is ','" << endl;
    cout << "Testing" << endl;
   
    //string array containing employee information
    const string employeeInformation[] =
    { "EN010,Abigail,Baker,a.baker@randatmail.com,45,INFORMATION_TECHNOLOGY",
     "EN011,Dexter,Richardson,d.richardson@randatmail.com,35,HUMAN_RESOURCES",
     "EN012,Lenny,Adams,l.adams@randatmail.com,66,HUMAN_RESOURCES",
     "EN013,Elian,Gibson,e.gibson@randatmail.com,26,INFORMATION_TECHNOLOGY",
     "EN014,Fiona,Wright,f.wright@randatmail.com,56,FINANCE",
     "EN015,Robert,Foster,r.foster@randatmail.com,52,INFORMATION_TECHNOLOGY",
     "EN016,Haris,Riley,h.riley@randatmail.com,44,FINANCE",
     "EN017,Nicole,Craig,n.craig@randatmail.com,33,LEGAL",
     "EN018,Gianna,Johnson,g.johnson@randatmail.com,41,PUBLIC_RELATIONS",
     "EN019,Frederick,Cooper,f.cooper@randatmail.com,38,PUBLIC_RELATIONS"
    };

    //size of the employeeInformation array
    const int employeeInfoSize = sizeof(employeeInformation) / sizeof(employeeInformation[0]);
    cout << employeeInfoSize << endl; 

        //instance of the list class
        Employee employeeList;

    for (int i = 0; i < employeeInfoSize; i++) {
        employeeList.employeeListArray[i] = new Employee(employeeList.addEmployee(
            refine(employeeInformation[i])[0],
            refine(employeeInformation[i])[1],
            refine(employeeInformation[i])[2],
            refine(employeeInformation[i])[3],
            stoi(refine(employeeInformation[i])[4]),
            stringsToEnum(refine(employeeInformation[i])[5])));
    }


    //employeeList.printEveryEmployee();
    cout << endl;
   
  
    return 0;
}


