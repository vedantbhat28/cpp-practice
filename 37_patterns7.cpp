#include <iostream>
using namespace std;

int main () {
    for (char n = 'A'; n < 72; n++)
    {
        for (int i= 64; i < n; i++)
        {
            cout<<n;
        }
        cout<<endl;
    }
    
    return 0;
}