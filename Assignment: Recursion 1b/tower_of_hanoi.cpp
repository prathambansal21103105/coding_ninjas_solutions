#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if(n>0){
        if(n==1){
            cout<<source<<" "<<destination<<endl;
        }
        else{
            towerOfHanoi(n-1,source,destination,auxiliary);
            towerOfHanoi(1,source,auxiliary,destination);
            towerOfHanoi(n-1,auxiliary,source,destination);
        }
    }
}

int main() {
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}
