#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("Ch3_Ex5Data.txt");
    ofstream outFile("Ch3_Ex5Output.dat");


    string lastnameM, firstnameA_M;  
    string lastnameG, firstnameS;
    string lastnameS, firstnameA_S;  

    double salary1, salary2, salary3;
    double payincrease1, payincrease2, payincrease3;
    double updatedsalary1, updatedsalary2, updatedsalary3;

    inFile >> lastnameM >> firstnameA_M >> salary1 >> payincrease1;
    inFile >> lastnameG >> firstnameS >> salary2 >> payincrease2;
    inFile >> lastnameS >> firstnameA_S >> salary3 >> payincrease3;

    
    updatedsalary1 = salary1 + (salary1 * (payincrease1/100));
    updatedsalary2 = salary2 + (salary2 * (payincrease2/100));
    updatedsalary3 = salary3 + (salary3 * (payincrease3/100));

    
    outFile << fixed << setprecision(2);
    outFile << "Employee: " << firstnameA_M << " " << lastnameM << 
       "\nPay increase: %" << payincrease1 <<"\n"
            << "New Salary: $" << salary1 << "\n\n";
    outFile << "Employee: " << firstnameS << " " << lastnameG <<
       "\nPay increase: %" << payincrease2 << "\n"
            << "New Salary: $" << salary2 << "\n\n";
    outFile << "Employee: " << firstnameA_S << " " << lastnameS <<
       "\nPay increase: %" << payincrease3 << "\n"
            << "New Salary: $" << salary3 << "\n";

    
    inFile.close();
    outFile.close();

    return 0;
}
