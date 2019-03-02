#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Thungry_client.h"
#include "Tcook.h"
using namespace std;
int random_price();
void testa();
void testb();
void read (class Thungry_client client);

int main()
{
testa();
    return 0;
}
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
