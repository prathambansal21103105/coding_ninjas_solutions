#include <iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(char input[]) {
    if(strlen(input)==1){
        return true;
    }
    else if(strlen(input)==2){
        if(input[0]==input[strlen(input)-1]){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        if(input[0]==input[strlen(input)-1]){
            input[strlen(input)-1]='\0';
            return true and checkPalindrome(input+1);
        }
        else{
            return false;
        }
    }
}

int main() {
    char input[50];
    cin >> input;
    
    if(checkPalindrome(input)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
