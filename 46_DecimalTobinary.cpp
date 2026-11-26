#include <iostream>
using namespace std;
int main () {
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    int sum=0;
    int rem;
    int pow=1;
     while(n>0){
        rem=n%2;
        n/=2;
        sum+=rem*pow;
        pow*=10;


     }
     cout<<"Your number in decimal is: "<<sum;
}