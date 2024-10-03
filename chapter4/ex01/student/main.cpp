#include <iostream>
#include <string>

using namespace std;

int main() {
    // Write your main here

    int num;

    cout << "input number: ";
    cin >> num;

    if(num > 0)   
      cout << "positive\n";
    else if(num < 0)
      cout << "negative\n";
    if (num == 0)
       cout << "zero\n";


    



    return 0;
}