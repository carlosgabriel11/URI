#include <iostream>

using namespace std;

//start of the main function
int main(){
	int total;
	int hours;
	int minutes;
	int seconds;

	//get the total amount of time
	cin >> total;

	//calculate the hours
	hours = total/3600;

	//the new total
	total %= 3600;

    //calculate the minutes
    minutes = total/60;

    //calculate the seconds
    seconds = total%60;

    cout << hours << ":" << minutes << ":" << seconds << endl;

	return 0;
}
