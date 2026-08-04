/*Project 3: The Union Overwrite

Prompt: Create a union named Telemetry containing a float (temperature) and an int (error_code).
 In main(), initialize the union and assign 98.6 to the temperature. Print the temperature.
  Next, assign 404 to the error code.
Print both the error code and the temperature variable on separate lines to observe how the shared memory space corrupts the float.

Expected Terminal I/O:

Plaintext
Temp logged: 98.6
Overwriting memory with Error Code...
Current Error Code: 404
Corrupted Temp: 5.66126e-43*/
#include <iostream>
using namespace std;
union telementry {
    float temp;
    int error_code;
};
int main (){
    union telementry data;
    data.temp = 98.6;
    data.error_code = 404;

    cout<<"overwritng memory....\n";
    cout<<"the error code is: "<<data.error_code<<endl<<"the corrupted temp is: "<<data.temp;

}