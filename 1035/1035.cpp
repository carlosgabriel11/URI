#include <iostream>

using namespace std;

//start of the main function
int main(){
	int A, B, C, D;
	bool state = false;

	cin >> A >> B >> C >> D;

	if(B > C){
		if(D > A){
			if((C + D) > (A + B)){
				if(C > 0){
					if(D > 0){
						if((A % 2) == 0){
							cout << "Valores aceitos" << endl;
							state = true;
						}
					}
				}
			}
		}
	}

	if(!state){
		cout << "Valores nao aceitos" << endl;
	}
	
	return 0;
}