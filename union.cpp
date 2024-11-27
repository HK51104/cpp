#include<iostream>

using namespace std;

 union marks
{
    int maths;
    int chem;
    int eng;
} h,k;



int main(int argc, char const *argv[])
{
    h.maths=5;
    h.chem=6;
    h.eng=7;
    k.maths=1;
    k.chem=2;
    k.eng=3;

    cout<<h.maths;
    cout<<h.eng;
    return 0;
}
