#include <iostream>
using namespace std;
int main (){
    int number [] = {10, 20, 30, 40};
    int *p=number;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
}