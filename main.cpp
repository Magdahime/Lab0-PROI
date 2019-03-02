#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;
int random_price();
void testa();
void read (class Thungry_client client);
class Thungry_client{
public:
string name;
double money;
int level_of_hunger{10};
int level_of_impatience{0};
int rating{0};

void give_5_stars();
void order_food(string food);
void get_angry(int price);
void eat(int taste, int price);
void go_to_the_restaurant(string name1, double money1);
};
class Tcook{
friend class Thungry_client;
string name;
public:
int cooking_level{0};
int speed{0};

int make_food(string to_do);
void break_time();
};
////////////////////////////////////////////////////////////////////////////////
void Thungry_client::order_food(string food){
cout<<"Hello i would like to order "<<food<<" , please"<<endl;
int price = random_price();
money -=price;
level_of_impatience ++;
if(level_of_impatience>5){
cout<<"Did you get my order? I'm starving.\n I can't wait for so long!"<<endl;
level_of_impatience ++;
get_angry(price);
}
}
////////////////////////////////////////////////////////////////////////////////
void Thungry_client::get_angry(int price){
cout<<"That's it! Give me back my money!"<<endl;
money += price;
}
////////////////////////////////////////////////////////////////////////////////
void Thungry_client::eat(int taste, int price){
cout<<"Finally, thank you very much."<<endl;
level_of_hunger += taste;
if (level_of_hunger>= 7){
get_angry(price);
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
int main()
{
testa();
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
int random_price(){
srand(time(NULL));
int price = rand();
price %=100;
return price;
}
void testa(){
Thungry_client clienta;
clienta.go_to_the_restaurant("Magda", 100);
read(clienta);
clienta.order_food("Pancakes");
read(clienta);
clienta.eat(1,10);
read(clienta);
}
void read (class Thungry_client client){
string stars (10,'*');
cout<<"\n"<<stars<<endl;
cout<<"Name: "<<client.name<<", money: "<< client.money<<endl;
cout<<"Hunger: "<<client.level_of_hunger<<", impatience: "<< client.level_of_impatience<<endl;
cout<<"Rating: "<<client.rating<<endl;
cout<<"\n"<<stars<<endl;
}
