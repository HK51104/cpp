#include <iostream>

using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
/*
we have given the name "T1","T2" and "T3" right now to multiple parameters
and further on we can convert "T1","T2" and "T3" into any data type
*/
/*
we have mentioned "default data type" of "T1,T2 and T3"
which means if nothing is mentioned further in the code then these dataype will work 
otherwise if something is mentioned in the code that datatype will work 
*/
class Happy
{
public:
    T1 a;
    T2 b;
    T3 c;

    Happy(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
    }
};

int main(int argc, char const *argv[])
{
    Happy<> h(4, 6.4, 'c');
    // here we can see we haven't mentioned "data type" for "T1,T2,T3"
    h.display();
    cout << endl;
    Happy<float, char, char> g(4.5, 'o', 'c');
    // here we can see we have mentioned "data type" for "T1,T2,T3"
    g.display();
    return 0;
}
