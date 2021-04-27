
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

     for (int i = 0; i < 10; i++) {
         employeeListArray[i] == a + (i + 1);
     }
    

    cout << "See Me!" << endl;
    cout << "Honey, I am home!" << endl;

    cout << endl;
   
  
    return 0;
}


