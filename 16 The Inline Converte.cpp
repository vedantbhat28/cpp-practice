#include <iostream>
using namespace std;
inline float degToFar (float tempD){
    return (((tempD*9)/5)+32);
}
int main (){
    cout<<"0C in farheneit is: "<<degToFar(0)<<endl;
    cout<<"10C in farheneit is: "<<degToFar(10)<<endl;
    cout<<"20C in farheneit is: "<<degToFar(20)<<endl;
}