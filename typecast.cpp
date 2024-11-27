#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int a = 5.55;
    float b = 5.55;

    cout << "the value of a+b is  " << a + b << endl;
    // it is at normal
    cout << "the value of a+b is " << a + int(b) << endl;
    // we have converted "float 5.55" to "int 5"
    cout << "the value of a+b is " << a + (int)b << endl;
    // another way of writing what is written above
    return 0;
}
