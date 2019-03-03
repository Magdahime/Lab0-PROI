#include "main.h"
#include "Thungry_client.h"
#include "Tcook.h"
using namespace std;
int random_price();
void testa();
void testb();
void testc();
void bug_function1(char* dish_list[], int how_many);
void bug_function2();
void read (class Thungry_client client);
void show_me_cook(class Tcook cook);

int main()
{
testa();
testb();
testc();
bug_function2();
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
clienta.eat(1);
read(clienta);
}
void testb(){
    Thungry_client clientb;
    Tcook cook;
    clientb.go_to_the_restaurant("Grzegorz",27);
    read(clientb);
    clientb.order_food("Scrambled eggs");
    cook.make_food("Scrambled eggs",clientb);
    clientb.eat(7);
    read(clientb);
}
void testc(){
    Tcook very_special_cook;
    very_special_cook.give_information();
    show_me_cook(very_special_cook);
}
void read (class Thungry_client client){
string stars (10,'*');
cout<<"\n"<<stars<<endl;
cout<<"Name: "<<client.name<<", money: "<< client.money<<endl;
cout<<"Hunger: "<<client.level_of_hunger<<", impatience: "<< client.level_of_impatience<<endl;
cout<<"Rating: "<<client.rating<<endl;
cout<<"\n"<<stars<<endl;
}
void show_me_cook(class Tcook cook){
string stars (10,'*');
cout<<"\n"<<stars<<endl;
cout<<"Name: "<<cook.name<<endl;
cout<<"Cooking skills: "<<cook.cooking_level<<endl;
cout<<"Speed: "<<cook.speed<<endl;
cout<<"\n"<<stars<<endl;
}
void bug_function1(char* dish_list[], int how_many){
    //In this function we would like to simply read all of the strings. But unfortunetly we forgot that the numeration ends on 0.
    //So we will get a segmentation fault here :)
    cout<<"What's on menu today?"<<endl;
    for(int i=1; i<=how_many; i++){
        cout<<"What a delicious dish! What is that?"<<endl;
        cout<<"It's "<<dish_list[i]<<endl;
    }
}
void bug_function2()
{
 //This function will help us test valgrind. We will simply forgot to free the memory. 
    cout<<"Please choose 10 dishes to create your menu."<<endl;
    int how_many{10};
    char** dish_list = (char**)malloc(sizeof(char*)*10);
    for(int i=0;i<how_many;i++){
        dish_list[i]=(char*)malloc(sizeof(char)*100);
     cin>>dish_list[i];   
    }
    bug_function1(dish_list,10);
    
}
