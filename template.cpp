#include <iostream>

using namespace std;

template <class T>
// syntax : template <class "any name">
// we have given the name "T" right now
// and further on we can convert "T" into any data type

class Vector
{
public:
    T*arr;
    // right now "arr"'s data type is "T" but we will further decide the data type of "T"
    int size;

    Vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotproduct(Vector &v)
    // right now "dotproduct" will return  data type "T" but we will further decide the data type of "T"
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main(int argc, char const *argv[])
{
    Vector <float> v1(3);
    // syntax : "class name" <data type> "object name" 
    // while making the "object" we have mentioned the "data type" of "T"
    v1.arr[0] = 0;
    v1.arr[1] = 1.5;
    v1.arr[2] = 2.5;
   
    Vector <float> v2(3);
    v2.arr[0] = 10.5;
    v2.arr[1] = 11.5;
    v2.arr[2] = 12.5;

     float a  = v1.dotproduct(v2);
    /*
    we cannot use "T" instead of "float" here to define the "data type"
    we need to mention the data type before hand only for an variable (according to my knowledge rn)
    */
    cout << a << endl;

    return 0;
}
