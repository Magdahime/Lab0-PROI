#ifndef TCOOK_H_
#define TCOOK_H_
#include <string>
class Tcook{
public:
int cooking_level{0};
int speed{0};

int make_food(std::string to_do);
};
#endif
