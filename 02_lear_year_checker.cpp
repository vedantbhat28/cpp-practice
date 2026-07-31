#include <iostream>
using namespace std;
int main (){
    
    int year;
    cout<<"Entre year: ";
    cin>>year;
    float a = year % 4;
    float b = year % 100;
    float c = year % 400;
    bool d = (((a==0) && (b>0)) || c==0);
    for (true; d==0; d=d){
      cout<<"\n 1"; break;
      }
     for (true; d>0; d=d){
       cout<<"\n 0"; break;
       }
    /*if (((a==0) && !(b==0)) || c==0){
      d = true;
      }
      else {
       
         d = false;
        }
      cout<<endl<<d;
    return 0;*/
  }