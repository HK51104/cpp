#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 14;
    int b = 15;
    float pi = 3.14;
    char c = 'u';

    cout << "hello world.\n Here the value of a is " << a << ".\n The value of b is:" << b;
    // still need to understand why for variable "a" we are using "<<" 2 times whereas for variable "b" we are using "<<" 1 time only
    cout << "\nThe value of pi is:" << pi;
    cout << "\nthe value of c is:" << c;
    return 0;
}
