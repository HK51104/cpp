#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        void setData(int a)
        {
            this->a = a;
            /*
            if we dont use "this ->" then 
            compiler would be confused because 
            it wont be able to differentiate between both the "a"
            but to make the compiler know which is local "a" and which "a" isnt
            local , we use "this->" ,"this->a" refers to the "not local a" 
            */
        }

        void getData()
        {
            cout<<"The value of a is "<<a<<endl;
        }
};
int main()
{
    A b;
    b.setData(4);
    b.getData();
    return 0;
}

