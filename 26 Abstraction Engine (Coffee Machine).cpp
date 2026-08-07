#include <iostream>
using namespace std;
class CoffeeMachine {
    private:
        int water_level;
        int bean_level;
    public:
        int fillMachine (int w, int b);
        void brewEspresso ();
};
int CoffeeMachine :: fillMachine (int w, int b){
    water_level = w; bean_level =b;
    cout<<"filling machine...";
}
void CoffeeMachine :: brewEspresso (){
    if (water_level >=2 && bean_level>=1){
        cout<<"\nbrewing coffee...Success!";
        water_level = water_level-2;
        bean_level = bean_level-1;
    }
    else{
        cout<<"\ninsufficient Supplies...failed!";
    }
}
int main (){
    class CoffeeMachine c1;

    c1.fillMachine (3,2);
    c1.brewEspresso();
    c1.brewEspresso(); //fail
}