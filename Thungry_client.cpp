#include "Thungry_client.h"
#include <iostream>
int random_price();
using namespace std;

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
}else{
give_5_stars();
}
}
////////////////////////////////////////////////////////////////////////////////
void Thungry_client::give_5_stars(){
cout<<"Food here is amazing! I will rate you 5 stars"<<endl;
rating =5;
}
void Thungry_client::go_to_the_restaurant(string name1, double money1){
name=name1;
money=money1;
cout<<"Hello, my name is "<<name<<" and i want to eat here tonight."<<endl;
}
