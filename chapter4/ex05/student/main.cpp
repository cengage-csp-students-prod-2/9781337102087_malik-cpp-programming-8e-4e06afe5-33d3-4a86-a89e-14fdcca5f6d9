#include <iostream>
#include <string>

using namespace std;

int main() {
    // Write your main here

    int side1, side2, side3;
    string rtriangle;

    cout << "enter length of three sides of a triangle: " << endl;
    cin >> side1 >> side2>> side3;

   

    if (side1 == side2+side3){ cout << "it is a right angled triangle."<<endl;

    }
    else {
        cout << "it is not a right angled triangle.";
    }

    



    return 0;
}