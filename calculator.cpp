#include <iostream>

using namespace std;

class SimpleCalculator
{

public:
    float a, b;
    void input()
    {

        cout << "Enter Number 1" << endl;
        cin >> a;
        cout << "Enter Number 2" << endl;
        cin >> b;
    }

    void sum()
    {
        cout << a << "+" << b << "=" << a + b << endl;
    }
};

class ScientificCalculator
{

public:
    float c;
    void input2()
    {
        cout << "Enter a Number for its square" << endl;
        cin >> c;
    }
    void square()
    {
        cout << c << "^" << "2" << "=" << c * c << endl;
    }
};
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};

int main(int argc, char const *argv[])
{
    // SimpleCalculator A;
    // A.input();
    // A.sum();
    // ScientificCalculator B;
    // B.input2();
    // B.square();
    /*this is the simple method to do function of two different calculators seperately*/
    HybridCalculator C;
    C.input();
    C.sum();
    C.input2();
    C.square();
    /* this method is used to perform functions of both the calculators together*/
    // to use a function of "base class" by "derived class object" we need to call the
    // the function using the "object of derived class" 

    return 0;
}
