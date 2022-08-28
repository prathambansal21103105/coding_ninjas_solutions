#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;

int stringToNumber(char input[]) {
    // Write your code here
    if(strlen(input)==1){
        int n=int(input[0]);
        int final1=n-48;
        return final1;
    }
    else{
        int n=int(input[0]);
        int final=n-48;
        final=final*pow(10,strlen(input)-1);
        return final+stringToNumber(input+1);
    }
}

int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
