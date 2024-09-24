
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

    double distance;
    double time;

    double coffee;
    double cost;


    inFile >> firstname >> lastname >> department >>
    salary >> bonus >> taxes >> distance >> time >>
    coffee >> cost;

    double paycheck = salary + bonus - taxes;
    double avg = distance/time;
    double sales = coffee * cost;

    
    outFile << "Name: " << firstname << " " << 
      lastname << ", " << "Department: \n" << 
        department << ;



            


    return 0;
}
