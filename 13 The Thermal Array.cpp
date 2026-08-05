#include <iostream>
using namespace std;
int main (){
    int tempretures [] = {32, 45, 60, 12, 90};
    tempretures [2] = 75;
    int i;
    for (i = 0; i<=4; i++)
    {
        cout<<tempretures[i]<<endl;
    }
    return 0;   
}