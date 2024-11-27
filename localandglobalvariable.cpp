#include <iostream>

using namespace std;

int glo = 5;
void sum()
{
    int a;
    cout << "Value of glo is \n"
         << glo;
    /*
     since it doesnt have a local variable it will take the value from global variable
     but local variable has more precedence from global variable
    */
}

int main(int argc, char const *argv[])
{
    int glo = 9;
    glo = 78;
    // whichever is written later will hvae more precedence
    sum();
    cout << "\nValue of glo is\n"
         << glo;
    return 0;
}
