#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;

    cout << "Input Filename: ";
    cin >> filename;

     
    ifstream inFile(filename);
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

    
    outFile << fixed << showpoint;
    outFile << setprecision(2);
    outFile << firstnameA_M << " " << lastnameM << " "  << updatedsalary1 << endl;
    outFile << firstnameS << " " << lastnameG << " " << updatedsalary2 << endl;
    outFile << firstnameA_S << " " << lastnameS << " " << updatedsalary3 << endl;

    
    inFile.close();
    outFile.close();

    return 0;
}
