#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    //  1.
     Complex(){
        a = 0;
        b =0;
    }
// 2.
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
// 3.
    Complex(int x){
        a = x;
        b = 0;
    }

  

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1(4, 6);
    // parameters matches 2.complex 
    c1.printNumber();

    Complex c2(5);
    // parameter matches 1.complex
    c2.printNumber();

    Complex c3;
    // parameter matches 3.complex
    c3.printNumber();
    return 0;
}
