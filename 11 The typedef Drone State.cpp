/*Project 6: The typedef Drone State

Prompt: Define an enum named Status (IDLE, FLYING). 
Define a structure for a drone containing an integer drone_id and a Status. 
Use typedef so the structure can be declared simply as Drone. 
Write a function named launchDrone that takes a Drone object by reference (using &). 
Inside the function, change the status to FLYING. Prove the modification in main().

Expected Terminal I/O:

Plaintext
Drone 77 Status (Pre-Launch): 0
Launch sequence initiated...
Drone 77 Status (Post-Launch): 1*/
#include <iostream>
using namespace std;
enum status {IDLE, FLYING};
typedef struct drone {
    int drone_id;
    status current_status;
}drone;

void launchDrone (){
    d1.current_status = FLYING;
    
}
int main (){
    struct drone d1;
    d1.drone_id = 01;
    d1.current_status = IDLE;
    
    cout<<"pre-launch status: "<<d1.current_status<<endl;
    launchDrone();
    cout<<"launched!\n"<<"post-launch status: "<<d1.current_status;

}