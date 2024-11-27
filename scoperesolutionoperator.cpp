#include <iostream>

using namespace std;
int c = 50;
int main(int argc, char const *argv[])
{
    int a = 5;
    int b = 6;
    int c = a + b;
    cout << "the local c is " << c << endl;
    cout << "the global c is " << ::c;
    // "::" is used to bring global variable back in play
    return 0;
}
