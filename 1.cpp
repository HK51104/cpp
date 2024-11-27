#include <iostream>

using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    /*
    "base1" constructor isn't called ( as there is no object made for its class )
    still it gets it variable(int i) from the "main function"
    which is impossible normally according to our previous knowledge
    the answer to this query is 
    As "Derived" class is inhereting "Base1" therefore
    if the "base class constructor" needs a parameter it will be provided by the 
    "derived class constructor" (which we have done on line no. 59) 
    while making "derived class constructor"
    This is because the base class constructor is called first when an object of the derived class is created. 
    */
    {
        data1 = i;
        cout << "base1 class constructor called" << endl;
    }
    /*
    although the "base1 constructor" isn't called
    it is still working when the constructor "derived" 
    is made as it passes some of its arguments to 
    constructor "Base1" and "Base2"
    that is why function "printdata1" and "printdata2"
    can get its value
    */
    void printdata1(void)
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor called" << endl;
    }
    void printdata2(void)
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    /*
    if the "base class constructor" needs a parameter it will be provided by the 
    "derived class constructor"
    This is because the "base class constructor" is called first when an "object" of the "derived class" is created.
    */
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor is called" << endl;
    }
    void printdataderived(void)
    {
        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived2 is " << derived2 << endl;
    }

}; 
int main(int argc, char const *argv[])
{
    Derived happy(1,2,3,4);
    happy.printdata1();
    happy.printdata2();
    happy.printdataderived();
    return 0;
}
