#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int time;
	int speed;
	int distance;
	double litters;

	cin >> time >> speed;

	distance = time*speed;

	litters = distance/12.0;

	cout << setprecision(3);
	cout << fixed;
	cout << litters << endl;
}