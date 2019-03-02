#include <iostream>
#include <string>


using namespace std;
class Thungry_client{
string name;

public:
double money;
int level_of_hunger{1};
int level_of_impatience{0};

void order_food(string my_plate);
void get_angry();
void eat(int taste);
void go_to_the_restaurant();
};
class Tcook{
string name;
public:
int cooking_level{0};
int speed{0};

int make_food(string to_do);
void break_time();
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
