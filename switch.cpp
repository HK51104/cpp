#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout << "tell me your age"<<endl;
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "you are a kid" << endl;
        break;
    case 45:
        cout << "you are 45" << endl;
        break;
    default:
        cout << "no special cases";
        break;
    }
    return 0;
}
