/*Project 1: The Enum Database

Prompt: Define an enum named Clearance with three named constants: GUEST, USER, and ADMIN.
 Define a struct named Account containing an integer id and a Clearance state.
  In main(), instantiate an Account, assign it an ID of 101, and set its clearance to ADMIN. 
  Print the ID and the raw integer value of the enum.

Expected Terminal I/O:

Plaintext
Initializing Account...
Account ID: 101
Clearance Level: 2 */
#include <iostream>
using namespace std;
enum Clearance {GUEST, USER, ADMIN};
    struct account {
        int id;
        Clearance state;
        
    };
int main () {
    struct account acc;
    acc.id = 101;
    acc.state = ADMIN;

    cout<<"Account ID: "<<acc.id<<endl<<"Clearance level: "<<acc.state<<endl;
    

}