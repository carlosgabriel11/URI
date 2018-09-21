#include <iostream>
#include <string>

using namespace std;

int main(){
    //the strings that contain each row of the keyboard
    const string row1 = "QWERTYUIOP[]\\";
    const string row2 = "ASDFGHJKL;'";
    const string row3 = "ZXCVBNM,./";
    const string row4 = "`1234567890-=";
    //the information in the input to decode
    string info;
    //the string decoded
    string decode;
    //a regular counter
    unsigned int counter;
    //the variable to get the position in the rows
    size_t pos;

    //the start of the loop of the program
    while(getline(cin, info)){
        for(counter = 0; counter < info.size(); counter++){
            //check if this character is a space
            if(info[counter] == ' '){
                decode.push_back(info[counter]);
            }

            //check if this character is in the first row of the keyboard
            pos = row1.find(info[counter]);
            if(pos != string::npos){
               decode.push_back(row1[pos - 1]);
               continue;
            }

            //check if this character is in the second row of the keyboard
            pos = row2.find(info[counter]);
            if(pos != string::npos){
               decode.push_back(row2[pos - 1]);
               continue;
            }

            //check if this character is in the third row of the keyboard
            pos = row3.find(info[counter]);
            if(pos != string::npos){
               decode.push_back(row3[pos - 1]);
               continue;
            }

            //check if this character is in the forth row of the keyboard
            pos = row4.find(info[counter]);
            if(pos != string::npos){
               decode.push_back(row4[pos - 1]);
               continue;
            }
        }

        cout << decode << endl;
        decode.clear();
    }

    return 0;
}
