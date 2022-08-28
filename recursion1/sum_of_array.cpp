#include<iostream>
using namespace std;

int sum(int input[], int n) {
    if(n==1){
        return input[0];
    }
    else{
        return input[n-1]+sum(input,n-1);
    }
}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}
