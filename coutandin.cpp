#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n1,n2;

    cout<<"enter value of n1 and n2\n";
    //  read it as "c""out" that is to give a output i.e to print it on the screen
    //  since speaking is less valued than listening we use "<<" for cout
    cin>>n1>>n2;
    // read it as "c""in" that is to take a input i.e to take a value from user
    // since listening is more valued than talking we use ">>" for cin
    cout<<"the sum is "<<n1+n2;
    // arithmetic operators between two variables 
    // if we want to usw cout or cin two times in the same line we can use "<<" or ">>" two times

    return 0;
}
