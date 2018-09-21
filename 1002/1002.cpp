/*
This program will calculate the area of a circunference
receiving the input the radius
*/

#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main(){
    //definition of pi
    const double pi = 3.14159;
    //the radius input
    double radius;

    //getting the radius
    cin >> radius;

    //showing the area of the circunference in the screen
    cout << fixed;
    cout << "A=" << setprecision(4) << pi*radius*radius << endl;

    return 0;
}
