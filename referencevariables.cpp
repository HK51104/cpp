#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x = 5;
    int &y = x;
    // "y" is a reference variable that is it is referencing towards "x"
    // the "address of y" holds the "value of x"
    cout << x << endl;
    cout << y;
    return 0;
}
