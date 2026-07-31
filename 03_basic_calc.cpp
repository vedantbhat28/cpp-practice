#include <iostream>
using namespace std;
int main (){
    cout<<"Addition[1]  Subtraction[2]  modulo[3] \n Select Operator: ";
    int op;
    cin>>op;
    cout<<"Entre two integers: ";
    int a; int b; int ans;
    cin>>a>>b;
    if ((op==3) && (b==0)){
      cout<<"Connot perform Modulo with 0";
      }
      else {
    switch (op) {
      case 1: ans = a + b; cout<<"\n Answer = "<<ans;
      break;
      
      case 2: ans = a - b; cout<<"\n Answer = "<<ans;
      break;
      
      case 3: ans = a % b; cout<<"\n Answer = "<<ans;
      break;
      
      default: cout<<"Choose a Valid Operator man common! ";
      }
      }
    return 0;
  }