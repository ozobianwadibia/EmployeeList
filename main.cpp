
#include "employee.h"

//main program
int main()
{
     //array to contain the employees
     Employee employeeListArray[10];

     Employee a1("EN010", "Abigail", "Baker", "a.baker@randatmail.com", 45, INFORMATION_TECHNOLOGY);
     Employee a2("EN011", "Dexter", "Richardson", "d.richardson@randatmail.com", 35, HUMAN_RESOURCES);
     Employee a3("EN012", "Lenny", "Adams", "l.adams@randatmail.com", 66, HUMAN_RESOURCES);
     Employee a4("EN013", "Elian", "Gibson", "e.gibson@randatmail.com", 26, INFORMATION_TECHNOLOGY);
     Employee a5("EN014", "Fiona", "Wright", "f.wright@randatmail.com", 56, FINANCE);
     Employee a6("EN015", "Robert", "Foster", "r.foster@randatmail.com", 52, INFORMATION_TECHNOLOGY);
     Employee a7("EN016", "Haris", "Riley", "h.riley@randatmail.com", 44, FINANCE);
     Employee a8("EN017", "Nicole", "Craig", "n.craig@randatmail.com", 33, LEGAL);
     Employee a9("EN018", "Gianna", "Johnson", "g.johnson@randatmail.com", 41, PUBLIC_RELATIONS);
     Employee a10("EN019", "Frederick", "Cooper", "f.cooper@randatmail.com", 38, PUBLIC_RELATIONS);

//     const int empArraySize = sizeof(employeeListArray) / sizeof(employeeListArray[0]);

    employeeListArray[0] = a1;
    employeeListArray[1] = a2;
    employeeListArray[2] = a3;
    employeeListArray[3] = a4;
    employeeListArray[4] = a5;
    employeeListArray[5] = a6;
    employeeListArray[6] = a7;
    employeeListArray[7] = a8;
    employeeListArray[8] = a9;
    employeeListArray[9] = a10;

    cout << "\nPrinting a single employee..." << endl;
    employeeListArray->printAnEmployee(a1);
    cout << endl;



    employeeListArray->printEveryEmployee(employeeListArray);

    employeeListArray->printByEmployeeDepartment(employeeListArray, HUMAN_RESOURCES);
    employeeListArray->printByEmployeeDepartment(employeeListArray, INFORMATION_TECHNOLOGY);

    employeeListArray->deleteEmployee(employeeListArray, "EN019");
    employeeListArray->printEveryEmployee(employeeListArray);
    employeeListArray->deleteEmployee(employeeListArray, "EN019");
    employeeListArray->printEveryEmployee(employeeListArray);
    employeeListArray->deleteEmployee(employeeListArray, "EN015");
    employeeListArray->printEveryEmployee(employeeListArray);
    employeeListArray->deleteEmployee(employeeListArray, "EN015");
    employeeListArray->printEveryEmployee(employeeListArray);






    cout << endl;

    return 0;
}


