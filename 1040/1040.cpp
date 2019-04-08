#include <iostream>
#include <iomanip>

using namespace std;

//start of the main function
int main(){
	float n1, n2, n3, n4;
	float media;

	cin >> n1 >> n2 >> n3 >> n4;

	media = (2*n1 + 3*n2 + 4*n3 + n4)/10;

	cout << setprecision(1);
	cout << fixed;
	cout << "Media: ";

	if(media < 5){
		cout << media << endl;
		cout << "Aluno reprovado." << endl;
	}

	else if (media >= 7){
		cout << media << endl;
		cout << "Aluno aprovado." << endl;
	}

	else{
		float exam;

		cout << media << endl;
		cout << "Aluno em exame." << endl;

		cin >> exam;

		cout << "Nota do exame: " << exam << endl;

		media = (media + exam)/2;

		if(media >= 5){
			cout << "Aluno aprovado." << endl;
		}
		else{
			cout << "Aluno reprovado." << endl;
		}

		cout << "Media final: " << media << endl;
	}

	return 0;
}