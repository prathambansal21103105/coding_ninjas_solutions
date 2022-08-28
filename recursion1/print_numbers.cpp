#include<iostream>
using namespace std;

void print(int n){
    //write your code here
    if(n==1){
        cout<<1;
    }
    else{
        print(n-1);
        cout<<" "<<n;
    }
}

int main(){
    int n;
    cin >> n;
  
    print(n);
}
