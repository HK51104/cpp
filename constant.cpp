#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    const int a = 5;

    cout << "value of a is " << endl << a << setw(5);
    cout << "value of a is " << setw(5) << a;
    return 0;
}
