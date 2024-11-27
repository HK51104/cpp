#include<iostream>

using namespace std;

int count=0;

class num
{
public:
num()
{
    count++;
    cout<<"this is the time when constuctor is called for object number "<<count<<endl;
}
~num()
{
    cout<<"this is the time when destructor is called for object number"<<count<<endl;
    count--;
}
};

int main(int argc, char const *argv[])
{
    cout<<"we are inside our main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    // SINCE AN OBJECT IS MADE ,, CONSTRUCTOR WILL RUN
    {
        cout<<"Entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        // SINCE OBJECTS ARE MADE ,, CONSTRUCTOR WILL RUN
        cout<<"exiting this block"<<endl;
    }
    /*anything and everything that is created wihin the scope "{}" will end or destruct after the scope is over */
    // therefore N2 and N3 will end here and thus destructor will run
    cout<<"back to main"<<endl;
    return 0;
}
// since N1 will end here destructor will run for it here.