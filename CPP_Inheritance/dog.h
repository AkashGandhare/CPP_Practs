#include <iostream>
#include "animal.h"

class dog:public animal {

private:
    string owner;

public:
    void setOwner(string newOwner);
    string getOwner();
};
