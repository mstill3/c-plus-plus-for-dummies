#include <iostream>
#include "animal.h"

using std::cout;
using std::endl;

Animal::Animal(string new_name) {
        name = new_name;
}

void Animal::speak() {
    cout << "bark says " << name << endl;
}
