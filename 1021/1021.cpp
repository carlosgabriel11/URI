#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//prototype of functions
double getNumberOfNotes(double, double);
double getNumberOfCoins(double, double);

//start of the main function

int main(){
    double total;

    //get the total
    cin >> total;

    cout << setprecision(2);
    cout << fixed;

    cout << "NOTAS:" << endl;

    total = getNumberOfNotes(total, 100.00);
    total = getNumberOfNotes(total, 50.00);
    total = getNumberOfNotes(total, 20.00);
    total = getNumberOfNotes(total, 10.00);
    total = getNumberOfNotes(total, 5.00);
    total = getNumberOfNotes(total, 2.00);

    cout << "MOEDAS:" << endl;

    total = getNumberOfCoins(total, 1.00);
    total = getNumberOfCoins(total, 0.50);
    total = getNumberOfCoins(total, 0.25);
    total = getNumberOfCoins(total, 0.10);
    total = getNumberOfCoins(total, 0.05);
    total = getNumberOfCoins(total, 0.01);

    cout << endl;

    return 0;
}

//a function to return the new value after the notes
double getNumberOfNotes(double total, double value){
    if(total >= value){
        int number = (int) (total/value);

        cout << number << " nota(s) de R$ " << value << endl;

        return total - value*number;
    }

    else{
        cout << "0 nota(s) de R$ " << value << endl;

        return total;
    }
}

//a function to return the new value after the coins
double getNumberOfCoins(double total, double value){
    int number = (int) (total/value + 0.001);

    cout << number << " moeda(s) de R$ " << value << endl;

    return total - value*number;
}
