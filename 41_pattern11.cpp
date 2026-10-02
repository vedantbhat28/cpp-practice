#include <iostream>
using namespace std;

int main () {
    char n='A';
    for (char i = 'A'; i < 70; i++)
    {
        for (char c = 64; c < i; c++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    
    return 0;
}
