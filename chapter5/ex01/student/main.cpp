#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    int sum = 0;
    string numStr;
    int digit;
    

    cout << "Please enter an integer: ";
    cin >> num;

    
    if (num < 0) num = -num;

    cout << "The individual digits are: ";

    
    if (num == 0) {
        cout << 0 << endl;
        sum = 0;
    } else {
        
        numStr = to_string(num);

        
        for (char digitChar : numStr) {
            digit = digitChar - '0'; 
            cout << digit << " ";         
            sum += digit;                 
        }
        cout << endl;
    }

    
    cout << "The sum of the digits is: " << sum << endl;

    return 0;
}
