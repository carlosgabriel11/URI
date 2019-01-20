#include <iostream>

using namespace std;

//start of the main function
int main(){
    int total;
    int days;
    int months;
    int years;

    //get the total of days
    cin >> total;

    //calculate the total of year
    years = total/365;

    //get the new total
    total %= 365;

    //get the number of months
    months = total/30;

    //get the number of days
    days = total%30;

    //show the info
    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

    return 0;
}
