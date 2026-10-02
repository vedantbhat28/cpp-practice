#include <iostream>
using namespace std;

int main () {
    int n=1;
    for (int i = 0; i < 5; i++)
    {
        for (int c = 0; c < i; c++)
        {
            cout<<n<<" ";
            n++;
        }
        cout<<endl;
    }
    
    return 0;
}