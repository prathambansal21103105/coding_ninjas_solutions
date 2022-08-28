#include<iostream>
using namespace std;

int count(int n){
    if(n<=9){
        return 1;
    }
    else{
        int left=n/10;
        int smallOutput;
        int output;
        if (left>0){
            smallOutput=count(left);
        }
        else{
            smallOutput=0;
        }
        output=1+smallOutput;
        return output;
    }
}

int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}


