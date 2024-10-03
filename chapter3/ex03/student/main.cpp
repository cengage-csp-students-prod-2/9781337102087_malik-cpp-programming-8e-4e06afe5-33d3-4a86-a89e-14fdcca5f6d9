#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Write your main here

    double kilos;

    cout << fixed << showpoint;

    cout << setprecision(2);



    cout << "enter weight in kilos: ";
    cin >> kilos;


    cout << "pounds equivalent: " << kilos * 2.2 << endl;





    return 0;
}