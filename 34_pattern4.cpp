#include <iostream>
using namespace std;

int main () {
    char cr = 'A';
    for (cr = 'A'; cr < 'J';)
    {
        for (int n = 0; n<3 ; n++)
        {
            cout<<cr<<" ";
            cr++;
        }
            cout<<endl;
        
    }
    
    return 0;
}