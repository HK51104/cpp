#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(void)
    {
        a = 10;
        b = 20;
        cout << "Hello World" << endl;
    }
    // constructor >>> normal function (in this case "setnumber")

    void setnumber()
    {
        a = 50;
        b = 60;
    }

    void printnumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
        /* "a","b" same rhega within the class i.e
         jo bhi a and b ki value milegi upar se vo yeh use kr lega*/
    }
};

int main(int argc, char const *argv[])
{
    complex c1, c2, c3;

    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}
