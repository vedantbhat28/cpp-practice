#include <iostream>
using namespace std;
int fib (int n){
    if (n<2){
        return n;
    }
    return (fib(n-1) + fib(n-2));
}
int main (){
    int n;
    cout<<"entre target fibonacci node: "; cin>>n;
    cout<<"\nnode "<<n<<" value is:: "<<fib(n);
}