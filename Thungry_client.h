#ifndef THUNGRY_CLIENT_H_
#define THUNGRY_CLIENT_H_
#include "main.h"
class Thungry_client{
public:
std::string name;
double money;
int level_of_hunger{10};
int level_of_impatience{0};

Thungry_client(std::string name_c, int hungry, int imp,double cash);
void order_food(std::string food);
void get_angry();
void eat(int taste);
int go_to_the_restaurant(int choice);

};
#endif
