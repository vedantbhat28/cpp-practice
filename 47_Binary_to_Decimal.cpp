#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int pow=1;
    int i;
    int sum=0;

    while(n>0){
        i=n%10;
        n=n/10;
        sum+=i*pow;
        pow*=2;
    }
    cout<<"Decimal: "<<sum;
    
}