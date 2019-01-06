#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	double x1, x2, y1, y2;
	double resultado;

	cin >> x1 >> y1 >> x2 >> y2;

	resultado = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	cout << setprecision(4);
	cout << fixed;
	cout << resultado << endl;
}