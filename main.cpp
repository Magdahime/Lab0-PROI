#include "main.h"
#include "Thungry_client.h"
#include "Tcook.h"
using namespace std;
int random_price();
void testa();
void testb();
void testc();
void bug_function1(char* dish_list[], int how_many);
int my_tip(double price,int satisfaction);
void menu_of_the_day();
void bug_function2();
void read (class Thungry_client client);
void show_me_cook(class Tcook cook);

int main()
{
//testa();
//testb();
//testc();
//my_tip(56.88,0);
//menu_of_the_day();
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
Thungry_client clienta("Magda", 10, 8,100);
clienta.go_to_the_restaurant(2);
read(clienta);
clienta.order_food("Pancakes");
read(clienta);
clienta.eat(1);
read(clienta);
}
void testb(){
    Thungry_client clientb("Grzegorz",3,3,35);
    Tcook cook;
    clientb.go_to_the_restaurant(3);
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
void menu_of_the_day(){
    char* dish_of_the_day = (char*)malloc(sizeof(char)*100);
cout<<"What is the dish of the day?"<<endl;
cin>>dish_of_the_day;
cout<<"Today special is "<<dish_of_the_day<<"Would you like to order it?"<<endl;
char*dish2=nullptr;
cout<<"One day later..."<<endl;
cout<<"What our cook's kitchen has to offer?"<<endl;
cin>>dish2;
dish_of_the_day=dish2;
cout<<"Today special is "<<dish_of_the_day<<"Would you like to order it?"<<endl;
}
int my_tip(double price,int satisfaction){
    constexpr double tip_perc{0.15};
    int tip=0;
    cout<<"Hey waiter, what is my tip?"<<endl;
    tip= (price*tip_perc)/(1/satisfaction);
    cout<<"Right away, sir. Your tip is "<<tip<<",sir."<<endl;
    return tip;
}
