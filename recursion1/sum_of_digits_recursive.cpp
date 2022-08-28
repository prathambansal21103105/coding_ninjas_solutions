#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    // Write your code here
    if(n<=9){
        return n;
    }
    else{
        int last_digit=n%10;
        int left=n/10;
        return last_digit+sumOfDigits(left);
    }
}

int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
