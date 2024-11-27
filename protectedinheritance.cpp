#include <iostream>

using namespace std;

class Base
{
protected:
    // kind of private but can be inherited
    int a;

private:
    int b;
};

class Derived : protected Base
{

};
 int main(int argc, char const *argv[])
{
    Base b;
    Derived d;
    cout << b.a;
    // this cannot be printed directly because "protected" member can be inherited but cannot be printed
    return 0;
}
