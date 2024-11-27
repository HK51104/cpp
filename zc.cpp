#include <iostream>

using namespace std;

class Base
{
public:
int a,b
    void foo()
    {
        cout << "Base::foo()" <<endl;
    }
};

class Derived : public Base
{
public:
    void bar()
    {
        foo(); // Call the foo function from the Base class
    }
};

int main()
{

    Derived d;
    d.bar();
    return 0;
}