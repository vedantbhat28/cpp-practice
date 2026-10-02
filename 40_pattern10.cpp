#include <iostream>
using namespace std;

int main () {
    
    for (char i = 'A'; i < 70; i++)
    {
        
        for (char n = i;n>64 ; n--)
        {
            
            cout<<n;
            
        }
        cout<<endl;
        
    }
    
    return 0;
}