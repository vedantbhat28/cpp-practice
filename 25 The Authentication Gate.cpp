#include <iostream>
using namespace std;
class SecureTerminal {
    private:
        int admin_pin = 0000;
    public:
        int updatePin (int old_pin, int new_pin);
};
int SecureTerminal :: updatePin (int old_pin, int new_pin){
    cout<<"Resetting password..."<<endl;
    if (old_pin == admin_pin){
        admin_pin = new_pin;
        cout<<"Pin succesfully updated!";
        cout<<"\nnew pin: "<<admin_pin;
    }
    else {
        cout<<"SECURITY ALRET: Authetication failed!";
    }
}
int main (){
    class SecureTerminal s1;
    s1.updatePin (0000, 1234);

}