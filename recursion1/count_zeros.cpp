#include <iostream>
using namespace std;

int countZeros(int n) {
    // Write your code here
    if(n<=9){
        if(n==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        int last_digit=n%10;
        if(last_digit==0){
            return 1+countZeros(n/10);
        }
        else{
            return countZeros(n/10);
        }
    }

}

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
