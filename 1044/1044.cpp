#include <iostream>

using namespace std;

//start of the main function
int main(){
	int num1, num2;

	cin >> num1 >> num2;

	if(num1 >= num2){
		if((num1 % num2) == 0){
			cout << "Sao Multiplos" << endl;
		}
		else{
			cout << "Nao sao Multiplos" << endl;
		}
	}	
	else{
		if((num2 % num1) == 0){
			cout << "Sao Multiplos" << endl;
		}
		else{
			cout << "Nao sao Multiplos" << endl;
		}
	}

	return 0;
}