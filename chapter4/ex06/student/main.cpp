#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    // Write your main here
    int cookies;
    const int cookiesPerBox = 24;
    const int boxesPerContainer = 75;
    
   



    cout << "Total Number of Cookies: ";
    cin >> cookies;

    int totalboxes = cookies/cookiesPerBox;
    int totalcontainers = totalboxes/boxesPerContainer;

    cout << "Total Boxes Needed: " << totalboxes <<"\nTotal Containers Needed: " 
    << totalcontainers << endl;
    cout << "\nLeftover Cookies: " << cookies % cookiesPerBox;
    cout << "\nLeftover Boxes: " << totalboxes % boxesPerContainer;
    cout << "\nLeftover Containers: " << totalcontainers % totalboxes;





    return 0;
}
