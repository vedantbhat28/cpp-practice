#include <iostream>
using namespace std;

int main () {
    for (int i = 0; i < 5; i++)
    {
        for (int n = 0; n < i; n++)
        {
            cout<<" ";
        }
        for (int  c = 1; c<5-i;c++ )
        {
            cout<<i+1;
        }
        cout<<endl;
    }
    
    return 0;
}