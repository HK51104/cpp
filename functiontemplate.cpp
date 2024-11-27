#include <iostream>

using namespace std;

// "T" ek "class" hai jiska "datatype" aage decide hoga
template <class T>
/*
we have given the name "T" right now
and further on we can convert "T" into any data type
*/
void swapp(T &a, T &b)
/*
since "T" is a class therefore as a "parameter"
hum "T" ke andar ke "objects" lenge
Thus using "&a,&b"
 */
{
    T temp = a;
    // "T datatype" ka variable "temp" create kiya hai
    a = b;
    b = temp;
    // basically swapping process
}

int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 7;
    // using "int" we have mentioned the "datatype of class T"
    swapp(x, y);
    // same "x and y" pass on honge "swapp" function mein
    /*
    kyunki "parameter" is of "datatype of class T"
    and we have passed "x and y" which are "int"
    therefore we have decided the "datatype for class T"
    */
    cout << x << endl
         << y;
    return 0;
}
