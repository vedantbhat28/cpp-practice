#include <iostream>
using namespace std;
int main (){
    int numb [] = {5, 10, 15};
    int i=0;
    cout<<"Amplifing....";
    do {
        cout<<(numb[i])*10<<endl;
        i++;
    } while (i<3);
}