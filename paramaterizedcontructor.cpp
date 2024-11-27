#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    // this will take arguments of "int" type
    {
        a = x;
        b = y;
    };

    void printnumber()
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
int main(int argc, char const *argv[])
{
    complex a(4, 6);
    a.printnumber();
    // implicit call

    complex b = complex(5, 7);
    b.printnumber();
    // explicit call
    return 0;
}
