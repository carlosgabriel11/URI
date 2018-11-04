#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main(){
	//the distance
	int distance;
	//the litters
	float litters;
	//the consumption
	float consumption;

	//get the inputs
	cin >> distance >> litters;

	//calculate the consumption
	consumption = distance/litters;

	//show in the screen
	cout << setprecision(3);
	cout << fixed;
	cout << consumption << " km/l" << endl;

	return 0;
}