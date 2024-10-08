#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>


using namespace std;

int main() {
    // Write your main here

    int num1,num2,num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 <= num2 && num1 <=num3){
         cout << " " << num1 << " "  << num2 << " " << num3;
    }

    if (num2 <= num1 && num2 <= num3){
        cout << " " << num2 << " " << num3 << " " << num1;
    }
 
    if(num3 <= num1 && num3 <= num2){
        cout << " " << num3 << " " << num2 << " " << num1;
    }
  
    
    







   return 0;
}
