#include <iostream>
using namespace std;
class BankAccount {
    private: 
        int balance=0;
    public:
        int deposit (int amount);
        void getBalance ();
};
void  BankAccount :: getBalance (){
    cout<<"Your balance is: "<<balance<<endl;
}
int BankAccount :: deposit (int amount){
    if (amount > 0){
    balance = balance + amount;
    cout<<"Attempting to deposit "<<amount<<"..."<<endl;
    cout<<"Transaction successful!"<<endl;
}
    else {
        cout<<"transaction failed: Invalid amount";
    }
    return 0;
}

int main (){
    class BankAccount b1;

    b1.deposit (500);
    b1.getBalance ();
}