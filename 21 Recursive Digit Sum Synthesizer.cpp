#include <iostream>
using namespace std;
int sumdigits (int n){
    if (n>0){
    int c;
    c = n % 10;
    return (c + sumdigits(n/10));}
}
int main (){
    int n;
    cout<<"entre you number: "; cin>>n;
    cout<<"the sum of digits of "<<n<<" is: "<<sumdigits(n);
}