#include "Tcook.h"
#include "Thungry_client.h"
#include "main.h"
using namespace std;
int Tcook::make_food(std::string to_do, class Thungry_client hungry_a){
std::cout<<"I'm the cook here and i have to do "<<to_do<<std::endl;
std::cout<<"Cooking..."<<std::endl;
std::cout<<"Cooking..."<<std::endl;
std::cout<<"Cooking..."<<std::endl;
if(speed<5){
    hungry_a.get_angry();
}
return(cooking_level);
}
void Tcook::give_information()
{
    cout<<"Name the cook"<<endl;
    string name_c;
    cin>> name_c;
    cout<<"What is his cooking level?"<<endl;
    int c_level;
    cin>>c_level;
    cout<<"What is his speed?"<<endl;
    int c_speed;
    cin>> c_speed;
    remember_me(name_c, c_level, c_speed);
}
void Tcook::remember_me(std::string name_c, int c_level, int c_speed)
{
    name = name_c;
    cooking_level=c_level;
    speed = c_speed;
}

