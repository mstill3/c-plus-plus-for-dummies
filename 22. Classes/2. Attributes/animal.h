#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using std::string;

class Animal {
    private:
        string name;
    public:
        Animal(string name);
        void speak();
};

#endif
