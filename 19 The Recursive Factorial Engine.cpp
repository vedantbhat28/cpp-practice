#include <iostream>
using namespace std;
int factorial (int num){
    if (num<=1){
        return 1;
    }
    return num * factorial (num-1);
}
int main () {
int num;
cout<<"entre the number: "; cin>>num;
cout<<"\nthe factorial of"<< num << " is: "<<factorial(num);
}