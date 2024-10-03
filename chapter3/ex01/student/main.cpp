
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

    double salaryANDbonus = salary + (salary * (bonus/100));

    double paycheck = salaryANDbonus - (salaryANDbonus * (taxes/100));
    
    outFile << fixed << showpoint;
    outFile << setprecision(2);

    outFile << "Name: " << firstname << " " << 
    lastname << ", " << "Department: " << department << endl 
    << "Monthly Gross Salary: " << "$" << salary << ", " 
    << "Monthly Bonus: " << bonus << "%" <<
    ", " << "Taxes: " << taxes << "%" << endl 
    << "Paycheck: " << "$" << paycheck << endl;

    outFile << "\n";


    outFile << "Distance Traveled: " << distance << " miles, " 
    << "Traveling Time: " << time << " hours" << endl <<
    "Average Speed: " << distance/time << " miles per hour" << endl;

    outFile << "\n";

    outFile << "Number of Coffee Cups Sold: " << coffee << ", " <<
    "Cost: " << "$" << cost << " per cup" << endl <<
    "Sales Amount = " << "$" << coffee * cost;

    inFile.close();
    outFile.close();



    return 0;
}
