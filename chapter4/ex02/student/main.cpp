#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 <= num2 && num1 <= num3) {
        cout << num1 << " ";
        if (num2 <= num3) {
            cout << num2 << " " << num3;
        } else {
            cout << num3 << " " << num2;
        }
    } else if (num2 <= num1 && num2 <= num3) {
        cout << num2 << " ";
        if (num1 <= num3) {
            cout << num1 << " " << num3;
        } else {
            cout << num3 << " " << num1;
        }
    } else {
        cout << num3 << " ";
        if (num1 <= num2) {
            cout << num1 << " " << num2;
        } else {
            cout << num2 << " " << num1;
        }
    }


    return 0;
}
