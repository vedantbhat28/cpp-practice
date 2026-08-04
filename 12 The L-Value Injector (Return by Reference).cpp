/*Prompt: Write a function named findCriticalCore that takes two integer reference variables. 
Evaluate which variable holds the smaller value. 
The function must return by reference the variable with the smaller value. 
In main(), declare two variables, call the function, and immediately assign -1 to the function call itself (treating it as an l-value, e.g., findCriticalCore(x, y) = -1;). 
Print both original variables to prove the smaller core was successfully overwritten.

Expected Terminal I/O:

Plaintext
Core 1 Temp: 85
Core 2 Temp: 42
Isolating critical core...
Core 1 Temp: 85
Core 2 Temp: -1*/
#include <iostream>
using namespace std;
void isolator (int* temp1, int* temp2){
    if (*temp1 > *temp2){
        *temp2 = -1;
    }
    else {
        *temp1 = -1;
    }
}
int main (){

    int temp1, temp2;
    cout<<"Core 1 temp: "; cin>>temp1;
    cout<<"\nCore 2 temp: "; cin>>temp2;
    cout<<"\nIsolation critical core;"<<endl;
    isolator(&temp1, &temp2);
    cout<<"Core 1 temp: "<<temp1<<endl;
    cout<<"Core 2 temp: "<<temp2<<endl;
    return 0;
}