#include <iostream>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    dog myDog;
    myDog.setAge(10);
    myDog.setColor("Black");
    myDog.setName("Bubba");
    myDog.setOwner("Mcfluent");

    cout<<"My dog age is "<<myDog.getAge()<<endl;
    cout<<"My dog color is "<<myDog.getColor()<<endl;
    cout<<"My dog Name is "<<myDog.getName()<<endl;
    cout<<"My dog owner is "<<myDog.getOwner()<<endl;

    return 0;
}
