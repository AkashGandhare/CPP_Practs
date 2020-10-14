#pragma once
#include <iostream>

using namespace std;

class animal {

private:
    string color;
    string name;
    int age;
public:
    void setName(string newName);
    string getName();
    void setColor(string newColor);
    string getColor();
    void setAge(int newAge);
    int getAge();
};
