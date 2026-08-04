/*Project 4: Pointer Swap Protocol

Prompt: Write a function named hardwareSwap that takes two integer pointers as formal parameters. 
Inside the function, use pointer dereferencing to swap their values. 
In main(), declare two integers, print them, pass their memory addresses to the function, and print them again to prove the original variables were permanently altered.

Expected Terminal I/O:

Plaintext
Pre-Swap  -> Reg A: 120 | Reg B: 85
Initiating pointer swap...
Post-Swap -> Reg A: 85 | Reg B: 120*/
#include <iostream>
using namespace std;
void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}
int main (){
    int a=120; int b=85;
    cout<<"Pre-swap, a="<<a<<" b="<<b<<endl<<"initiating swap....\n";
    swap (&a, &b);
    cout<<"Post-swap, a="<<a<<" b="<<b<<endl;

}