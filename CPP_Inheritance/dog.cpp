#include <iostream>
#include "dog.h"

using namespace std;

void dog::setOwner(string newOwner) {
    owner = newOwner;
}

string dog::getOwner() {
    return owner;
}
