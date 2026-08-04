/*Project 2: Prototype Validation (Call by Value)

Prompt: Write a function named calculateThrust. 
You must declare its prototype above main() and implement its logic below main(). 
The function takes two integers (mass and acceleration) by value, multiplies them, and returns the integer result.
In main(), prompt the user for the two values, pass them to the function, and print the returned thrust.

Expected Terminal I/O:

Plaintext
Enter Mass and Acceleration: 45 10
Engine Thrust: 450*/
#include <iostream>
using namespace std;

int calculateThrust (int mass, int acceleration){
    int thrust = mass*acceleration;
    return thrust;
}
int main (){
    int mass;
    int acceleration;
    cout<<"Entre mass & acceleration: "; cin>>mass>>acceleration;
    cout<<"\nthrust: "<<calculateThrust (mass, acceleration);

}