#include <iostream>

using namespace std;

class employee
{
private:
    int a, b, c;
    // it is private and can only be accessed from here(that is if we want to give them a
    // integer value we can only give it from within the function)

public:
    int d, e;
    void bata()
    {
        a = 1;
        b = 2;
        c = 3;
        // we have given the value to the private variable from here (within the function)
    };
    void data()
    {
        cout << a << endl;
        cout << b << endl;
        cout << c << endl;
        cout << d << endl;
        cout << e << endl;
    };
};

int main(int argc, char const *argv[])
{
    employee happy;
    happy.d = 4;
    happy.e = 5;
    // we cannot tell the value of "a","b","c" similarly because they are in the private domain
    // they can only be accessed within the function

    happy.bata();
    // since "a","b","c" all have been given values here as well as from "bata" function
    // it will only accept value from "bata" function
    // because local>>>>global
    happy.data();
    return 0;
}
