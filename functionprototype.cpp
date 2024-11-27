#include <iostream>

using namespace std;

int sum(int,int);
/* 
this is a function prototype which means it is not actually a function but it assures(not guarantee) the compiler
that it will get function "sum" if it keep finding it and move forward.
*/
int main(int argc, char const *argv[])
{
    int x = 5;
    int y = 6;
     cout << sum(x, y);
    return 0;
}

int sum(int a, int b)
{
    int c;
    return c = a + b;
}
