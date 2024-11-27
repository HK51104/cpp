#include<iostream>
#include<list>

using namespace std;

int main(int argc, char const *argv[])
{
    list <int> list1;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(11);

    list<int>::iterator iter;
    // it is kind of "pointer" which points(and thus iterates) "member of list"
    iter=list1.begin();
    // here it says the "pointer iter" points to the "beginning" of the "list l1"
    cout<<*iter<<" ";
    // print whatever the "pointer iter" is storing
    iter++;
    // the "pointer iter" moves to the next member of "list"
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";
    iter++;
    cout<<*iter<<" ";

    return 0;
}
