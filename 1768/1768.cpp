#include <iostream>

using namespace std;

//start of the main function
int main(){
    //the max size of the tree
    int N;
    //the number of asterisk in each row
    int asterisk;
    //the number of spaces
    int spaces;
    //a regular counter
    unsigned int counter;

    //start of the loop
    while(cin >> N){
        //start the top of the tree
        asterisk = 1;
        //the initial number of spaces
        spaces = N/2;

        //developing the tree
        while(asterisk <= N){
            //doing the spaces
            for(counter = 0; counter < spaces; counter++){
                cout << " ";
            }

            //doing the asterisks
            for(counter = 0; counter < asterisk; counter++){
                cout << "*";
            }

            spaces--;
            asterisk += 2;

            cout << endl;
        }

        //doing the base of the tree
        spaces = N/2;

        for(counter = 0; counter < spaces; counter++){
            cout << " ";
        }
        cout << "*" << endl;

        spaces--;

        for(counter = 0; counter < spaces; counter++){
            cout << " ";
        }

        cout << "***" << endl;
    }

    return 0;
}
