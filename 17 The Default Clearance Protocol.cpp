#include <iostream>
using namespace std;
int registerUser (int user_id, char zone = 'A', int clearance_level = 1){
    cout<<"registered id: "<<user_id<<" | Zone: "<<zone<<" | Clearance: "<<clearance_level<<endl;

} 
int main (){
    registerUser (101, 'X', 5);
    registerUser (102, 'B');
    registerUser (103);
}