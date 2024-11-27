#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout << "tell me your age" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "you are a kid" << endl;
    }
    else if (age == 18)
    {
        cout << "you can vote by margin" << endl;
    }
    else
    {
        cout << "you can vote" << endl;
    }

    return 0;
}
