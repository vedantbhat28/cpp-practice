#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    int mass;
    const double g=9.81;
    
    cout<<"Entre mass (kg): ";
    cin>>mass;
    
    float weight = mass*g;
    int w =  weight;
     
    cout<<"Mass"<<setw(15)<<"Exact Weight"<<setw(15)<<"Truncated Weight"<<setw(15)<<endl;
    cout<<mass<<setw(15)<<weight<<setw(15)<<w<<setw(15)<<endl;
    return 0;
  }