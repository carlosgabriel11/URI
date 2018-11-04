#include <iostream>
#include <cmath>

using namespace std;

//start of the main function
int main(){
	//the input values
	int number1, number2, number3;
	//the outputs of the formula
	int maior12, maior;

	//get the input
	cin >> number1 >> number2 >> number3;

	//get the maior12
	maior12 = (number1 + number2 + abs(number1 - number2))/2;

	//get the maior
	maior = (maior12 + number3 + abs(maior12 - number3))/2;

	//show the maior
	cout << maior << " eh o maior";

	return 0;
}