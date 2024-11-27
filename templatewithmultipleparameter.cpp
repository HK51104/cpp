#include <iostream>

using namespace std;

template <class T1, class T2>
/*
we have given the name "T1" and "T2" right now to multiple parameters
and further on we can convert "T1" and "T2" into any data type
*/
class MyClass
{
public:
    T1 data1;
    // right now "data1"'s data type is "T1" but we will further decide the data type of "T1"
    T2 data2;
    // right now "data2"'s data type is "T2" but we will further decide the data type of "T2"
    MyClass(T1 a, T2 b)
    // parameter mein "variable a" aayega of "datatype T1"
    // parameter mein "variable b" aayega of "datatype T2"
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << this->data2;
    }
};

int main(int argc, char const *argv[])
{
    MyClass<int, char> obj(1, 'c');
     // while making the "object" we have mentioned the "data type" of "T1" and "T2"
    obj.display();
    return 0;
}
