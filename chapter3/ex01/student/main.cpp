#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Write your main here
    ifstream inFile;
    ofstream outFile;

    inFile.open("inData.txt");
    outFile.open("outData.txt");

    string firstname;
    string lastname;
    string department;

    double salary;
    double bonus;
    double taxes;
    double paycheck;

    double distance;
    double time;
    double avg;

    double coffee;
    double cost;
    double sales;

    inFile >> firstname >> lastname >> department;
    
    outFile << "Name: " << firstname << " " << 
      lastname << ", " << "Department: " << 
        department << endl;



            


    return 0;
}
