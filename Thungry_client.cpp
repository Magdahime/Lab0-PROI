#include "Thungry_client.h"
#include "main.h"
int random_price();
using namespace std;
Thungry_client::Thungry_client(std::string name_c, int hungry, int imp, double cash)
{
    cout<<"Hello, my name is "<<name_c<<" and i want to eat here tonight."<<endl;
    if(hungry>5){
        cout<<"I'm very hungry."<<endl;
    }else{
        cout<<"I can wait."<<endl;
    }
    name=name_c;
    level_of_hunger=hungry;
    level_of_impatience=imp;
    money=cash;
}
int Thungry_client::go_to_the_restaurant(int choice)
{
   constexpr int menu_size{7};
   string frame(20,'*');
string menu[menu_size] = {"Pancakes", "Scrambled eggs", "Coffee", "Toasts", "Sandwiches", "Tea", "Omelette"};
int calories[menu_size] = {7,6,2,4,5,1,6};
    cout<<frame<<endl;
    cout<<"MENU"<<endl;
for(int i=0; i<menu_size; i++){
    cout.width(15);
    cout<<menu[i]<<'\t'<<calories[i]<<endl;
}
    cout<<frame<<endl;
    return choice;
}
void Thungry_client::order_food(string food){
cout<<"Hello i would like to order "<<food<<" , please"<<endl;
int price = random_price();
if (money>=price)
money -=price;
else
    get_angry();
level_of_impatience ++;
if(level_of_impatience>5){
cout<<"Did you get my order? I'm starving.\n I can't wait for so long!"<<endl;
level_of_impatience ++;
get_angry();
}
}
////////////////////////////////////////////////////////////////////////////////
void Thungry_client::get_angry(){
cout<<"That's it! Give me back my money!"<<endl;
}
////////////////////////////////////////////////////////////////////////////////
void Thungry_client::eat(int taste){
cout<<"Finally, thank you very much."<<endl;
level_of_hunger += taste;
if (level_of_hunger>= 7){
get_angry();
}
}
