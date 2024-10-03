#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Write your main here

    double mass;
    double density;

    cout << setprecision(2) << fixed << showpoint;


    cout << "input mass: ";
    cin >> mass;

    cout << "input density: ";
    cin >> density;

    cout << "volume: " << mass/density;



    return 0;
}