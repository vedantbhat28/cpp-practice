/*Project 5: Reference Variable Amplifier

Prompt: Write a function named boostSignal that takes an integer by reference (using the & alias syntax, no pointers) and a multiplier integer by value. 
The function should directly multiply the reference variable by the multiplier. 
Call this function from main() and output the modified original variable.

Expected Terminal I/O:

Plaintext
Raw Signal: 15
Applying 3x Boost...
Amplified Signal: 45*/
#include <iostream>
using namespace std;
int boostSignal (int raw_signal){
    int amp_signal = raw_signal*3;
    return amp_signal;
}
 
int main (){
    int signal;
    cout<<"Raw signal: ";cin>>signal;
    int & raw_signal =  signal;
    cout<<"\n3x amplified signal: "<<boostSignal(raw_signal);
}