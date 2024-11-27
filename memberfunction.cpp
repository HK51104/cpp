#include <iostream>

using namespace std;
template <class T>
class Happy
{
public:
    T data;
    Happy(T a)
    {
        data = a;
    }
    void display()
    {
        cout<<data<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Happy<int> H(5);
    cout << H.data;
    H.display();V
    return 0;
}
