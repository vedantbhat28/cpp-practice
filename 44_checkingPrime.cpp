#include <iostream>
using namespace std;
int checkPrime (int n){
    for (int i = 2; i <n; i++)
    {
        if (n%i==0){
            cout<<"Your Number ain't Prime.";
            return 0;

        }
        
    }
    cout<<"Your number is Prime";
    return 0;
    
}
int main () {
    checkPrime(9);
    return 0;
}