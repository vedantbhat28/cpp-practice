#include <iostream>
using namespace std;
int main (){
    int power_state = 50;
    int input;
    do {
    cout<<"Current Power: "<<power_state<<"\n Command [1]inc [2]dec [9]exit: ";
    cin>>input;
    cout<<endl;
    if (input==1){
      power_state = power_state + 15;
      }
     else if (input == 2){
       power_state = power_state - 20;
       }
       else if (input == 9){
         break;}
         
         else {cout<<"Are you outta your mind?";}
         
    } while (((power_state<100) && (power_state>0)) && (input != 9));
    cout<<"\n Shutdown. Recent Power: "<<power_state;
    return 0;
  }