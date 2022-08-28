#include<iostream>
using namespace std;

int allIndexes(int input[], int n, int x, int output[]) {
    // size = n
    if(n<1){
        return 0;
    }
    else if(n==1){
        if(input[0]==x){
            output[0]=0;
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        if(input[n-1]==x){
            int index=n-1;
            output[allIndexes(input,n-1,x,output)]=index;
            return 1+allIndexes(input,n-1,x,output);
        }
        else{
            return allIndexes(input,n-1,x,output);
        }
    }

}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}
