#include <iostream>
using namespace std;

int main() {
    int side1, side2, side3;

    cout << "Enter lengths of three sides of a triangle: ";
    cin >> side1 >> side2 >> side3;

    // Check the Pythagorean theorem directly without sorting
    if (side1 * side1 == side2 * side2 + side3 * side3 ||
        side2 * side2 == side1 * side1 + side3 * side3 ||
        side3 * side3 == side1 * side1 + side2 * side2) {
        cout << "It is a right angled triangle." << endl;
    } else {
        cout << "It is not a right angled triangle." << endl;
    }

    return 0;
}
