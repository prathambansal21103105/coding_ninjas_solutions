#include <iostream>
#include<cstring>
using namespace std;

void replacePi(char input[]) {
	// Write your code here
    if(strlen(input)==2){
        if(input[0]=='p' and input[1]=='i'){
            input[0]='3';
            input[1]='.';
            input[strlen(input)+2]='\0';
            for(int i=strlen(input)-1;i>=2;i--){
                input[i+2]=input[i];
            }
            input[2]='1';
            input[3]='4';
        }
    }
    else{
        if(input[0]=='p' and input[1]=='i'){
            input[0]='3';
            input[1]='.';
            input[strlen(input)+2]='\0';
            for(int i=strlen(input)-1;i>=2;i--){
                input[i+2]=input[i];
            }
            input[2]='1';
            input[3]='4';
            replacePi(input+4);
        }
        else{
            replacePi(input+1);
        }
    }
}

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
