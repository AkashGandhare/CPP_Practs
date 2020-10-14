#include <iostream>
#include "animal.h"

void animal::setName(string newName) {
    name = newName;

}

string animal::getName(){
    return name;
}
void animal::setColor(string newColor){
    color = newColor;
}

string animal::getColor(){
    return color;

}

void animal::setAge(int newAge) {
    age = newAge;

}

int animal::getAge(){
    return age;
}
