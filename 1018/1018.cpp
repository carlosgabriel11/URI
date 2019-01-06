#include <iostream>

using namespace std;

int main(){
	long int value;
	int nota100 = 0;
	int nota50 = 0;
	int nota20 = 0;
	int nota10 = 0;
	int nota5 = 0;
	int nota2 = 0;
	int nota1 = 0;

	cin >> value;

	cout << value << endl;

	if(value >= 100){
		nota100 = value/100;
		value -= 100*nota100;
	}


	if(value >= 50){
		nota50 = value/50;
		value -= 50*nota50;
	}

	if(value >= 20){
		nota20 = value/20;
		value -= 20*nota20;
	}

	if(value >= 10){
		nota10 = value/10;
		value -= 10*nota10;
	}

	if(value >= 5){
		nota5 = value/5;
		value -= 5*nota5;
	}


	if(value >= 2){
		nota2 = value/2;
		value -= nota2*2;
	}

	if(value >= 1){
	nota1 = value;
	}

	cout << nota100 << " nota(s) de R$ 100,00" << endl;
	cout << nota50 << " nota(s) de R$ 50,00" << endl;
	cout << nota20 << " nota(s) de R$ 20,00" << endl;
	cout << nota10 << " nota(s) de R$ 10,00" << endl;
	cout << nota5 << " nota(s) de R$ 5,00" << endl;
	cout << nota2 << " nota(s) de R$ 2,00" << endl;
	cout << nota1 << " nota(s) de R$ 1,00" << endl;
}