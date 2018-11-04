/*
Calculate the area of some geometric forms
*/

#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main(){
    //the input values
    double A, B, C;
    //the value of pi
    const double PI = 3.14159;

    //get the numbers
    cin >> A >> B >> C;

    //set the precision to 3 decimal numbers
    cout << fixed << setprecision(3);

    //calculate the area of the triangle
    cout << "TRIANGULO: " << (A*C)/2 << endl;
    //calculate the area of the circle
    cout << "CIRCULO: " << PI*C*C << endl;
    //calculate the area of the trapeze
    cout << "TRAPEZIO: " << (A + B)*C/2 << endl;
    //calculate the area of the square
    cout << "QUADRADO: " << B*B << endl;
    //calculate the area of the rectangle
    cout << "RETANGULO: " << A*B << endl;

    return 0;
}
