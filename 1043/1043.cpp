#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main(){
	float n1, n2, n3;
	bool trig = true;

	cin >> n1 >> n2 >> n3;

	if(n1 >= (n2 + n3)){
		trig = false;
	}
	if(n2 >= (n1 + n3)){
		trig = false;
	}
	if(n3 >= (n1 + n2)){
		trig = false;
	}

	cout << setprecision(1);
	cout << fixed;

	if(trig){
		cout << "Perimetro = " << n1 + n2 + n3 << endl;
	}
	else{
		cout << "Area = " << (n1+n2)*n3/2 << endl;
	}

	return 0;
}