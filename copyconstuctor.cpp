#include <iostream>

using namespace std;

class number
{

    int a;

public:
    number()
    {
        a = 0;
    }

    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout << "Copy constructor called!!" << endl;
        a = obj.a;
        /*this simply states that "a" ko "obj ke a" ke barabar kardo
        and idhar "obj"="object of numbers" eg.. "x,y,z" */
    }

    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};

int main(int argc, char const *argv[])
{
    number x, y, z(55), z2;
    z.display();
    number z1(z); /*copy constructor invoked because it asking to take input "z" to copy. */
    z1.display();
    z2 = z;
    z2.display(); /*copy constructor NOT invoked because z2 is already an object that ahs void as input*/

    return 0;
}
