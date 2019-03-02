#ifndef THUNGRY_CLIENT_H_
#define THUNGRY_CLIENT_H_
#include<string>
class Thungry_client{
public:
std::string name;
double money;
int level_of_hunger{10};
int level_of_impatience{0};
int rating{0};

void give_5_stars();
void order_food(std::string food);
void get_angry();
void eat(int taste);
void go_to_the_restaurant(std::string name1, double money1);
};
#endif
