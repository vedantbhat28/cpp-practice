#include <iostream>
using namespace std;
class Player {
    private: 
        int health;
    public:
        void setHealth (int h);
        void getHealth ();
    

};
void Player::setHealth (int h){
    
    health =h;
}
void Player::getHealth (){
    cout<<"current health status: "<<health;
} 
int main (){
    class Player p1;
    p1.setHealth (100);
    p1.getHealth ();
}
