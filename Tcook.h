#ifndef TCOOK_H_
#define TCOOK_H_
#include <string>
class Tcook{
public:
    std::string name;
int cooking_level{0};
int speed{0};

int make_food(std::string to_do, class Thungry_client hungry_a);
void give_information();
void remember_me(std::string name_c, int c_level, int c_speed);
};
#endif
