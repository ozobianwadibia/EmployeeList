
#include "list.h"

//helper method that converts strings to enum
EmployeeDeptartment stringsToEnum(const string& deptStrings) {
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
        getline(rowStream, substr, '/');
        containerArray[i] = substr;
        i++;
    }

    return containerArray;
}


//main program

int main()
{
    cout << "Delimiter is '/'" << endl;
    cout << "Testing" << endl;
   
    //string array containing employee information
    const string employeeInformation[] =
    {"EN010/Abigail/Baker/a.baker@randatmail.com/29-May-1973/17-Jun-2018/7877924156/71186/AAS/BAS/Systems Analyst/165109.00/INFORMATION_TECHNOLOGY",
     "EN011/Dexter/Richardson/d.richardson@randatmail.com/4-Mar-1975/3-Oct-2014/3200473816/75816/BS/MS/PhD/Historian/167239.00/HUMAN_RESOURCES",
     "EN012/Lenny/Adams/l.adams@randatmail.com/26-Apr-1978/11-Jun-2017/1373159359/85632/BS/MS/PhD/Scientist/91606.00/HUMAN_RESOURCES",
     "EN013/Elian/Gibson/e.gibson@randatmail.com/16-Jun-1974/15-Feb-2014/671070313/93597/BS/MS/PhD/Senior Engineer/139969.00/INFORMATION_TECHNOLOGY",
     "EN014/Fiona/Wright/f.wright@randatmail.com/28-Sep-1975/7-Sep-2010/3704063578/85295/AAS/Buyer/63475.00/FINANCE",
     "EN015/Robert/Foster/r.foster@randatmail.com/9-May-1968/22-Jan-2014/4150815206/41520/BBA/MBA/Software Developer/149638.00/INFORMATION_TECHNOLOGY",
     "EN016/Haris/Riley/h.riley@randatmail.com/5-Jun-1977/7-Aug-2017/3600520748/53411/AA/BA/Architect/184905.00/FINANCE",
     "EN017/Nicole/Craig/n.craig@randatmail.com/18-Nov-1976/16-Dec-2019/5123431337/74497/AS/BS/MS/Case Manager/81002.00/LEGAL",
     "EN018/Gianna/Johnson/g.johnson@randatmail.com/8-May-1972/31-Mar-2014/1354905093/22253/BA/MA/Coordinator/56538.00/PUBLIC_RELATIONS",
     "EN019/Frederick/Cooper/f.cooper@randatmail.com/29-Dec-1966/20-Nov-2016/5379074264/35306/BS/MS/Senior Coordinator/144775.00/PUBLIC_RELATIONS"
    };

    //size of the employeeInformation array
    const int employeeInfoSize = sizeof(employeeInformation) / sizeof(employeeInformation[0]);
    cout << employeeInfoSize << endl;

    //instance of the list class
    List employeeList;

    for (int i = 0; i < employeeInfoSize; i++) {
        employeeList.employeeListArray[i] = new Employee(employeeList.addEmployee(
            refine(employeeInformation[i])[0],
            refine(employeeInformation[i])[1],
            refine(employeeInformation[i])[2],
            refine(employeeInformation[i])[3],
            refine(employeeInformation[i])[4],
            refine(employeeInformation[i])[5],
            stoll(refine(employeeInformation[i])[6]),
            stoi(refine(employeeInformation[i])[7]),
            refine(employeeInformation[i])[8],
            refine(employeeInformation[i])[9],
            refine(employeeInformation[i])[10],
            refine(employeeInformation[i])[11],
            stod(refine(employeeInformation[i])[12]),
            stringsToEnum(refine(employeeInformation[i])[13])));
    }

   /* for (int i = 0; i < 20; i++) {
        employeeList.employeeListArray[i]->print();
    }
   */
  
    return 0;
}


