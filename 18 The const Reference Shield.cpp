#include <iostream>
using namespace std;
int sum (const int &a, const int &b){
    return a+b;
}
int main (){
    const int a = 3;
    const int b= 6;
    cout<<"the sum of 3 and 6 is "<<sum(a, b);
}