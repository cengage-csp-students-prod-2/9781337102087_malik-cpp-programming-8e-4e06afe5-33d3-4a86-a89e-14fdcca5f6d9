#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter an integer between 0 and 35: ";
    cin >> num;
    
    if (num < 0 || num > 35) {
        cout << "Number must be between 0 and 35." << endl;
        return 1;}
    
    if (num <= 9) {
        cout << num << endl;} 
        
        else {
        
        char letter = static_cast<char>('A' + (num - 10));
        cout << letter << " for " << num << endl;}

return 0;
}
