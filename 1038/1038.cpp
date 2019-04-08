#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main(){
	int code;
	int quantity;

	cin >> code >> quantity;

	cout << setprecision(2);
	cout << fixed;

	cout << "Total: R$ ";

	if(code == 1){
		cout << float(4*quantity) << endl;
	}
	else if(code == 2){
		cout << float(4.5*quantity) << endl;
	}
	else if(code == 3){
		cout << float(5*quantity) << endl;
	}
	else if(code == 4){
		cout << float(2*quantity) << endl;
	}
	else{
		cout << float(1.5*quantity) << endl;
	}
}