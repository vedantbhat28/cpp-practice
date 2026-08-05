#include <iostream>
using namespace std;
int calccomppower (int base, int exp = 2){
    if (exp>1){
        return base * calccomppower(base, exp-1);
    }
}
int main (){
    int base, exp;
    cout<<"entre base num: "; cin>>base;
    cout<<"\nentre exponent: "; cin>>exp;
    cout<<"default power: "<<calccomppower (base)<<endl;
    cout<<"default power: "<<calccomppower (base, exp)<<endl;;
    
}
