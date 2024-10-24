#include <iostream>

using namespace std;

int main() {
    int num;
    int sum = 0;
    int digit;

    cout << "Please enter an integer: ";
    cin >> num;

    
    if (num < 0) num = -num;

    cout << "The individual digits are: ";

    
    if (num == 0) {
        cout << 0 << endl;
        sum = 0;
    } else {
        
        while (num > 0) {
            digit = num % 10; 
            cout << digit << " ";  
            sum += digit;        
            num /= 10;             
        }
        cout << endl;
    }

    
    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
