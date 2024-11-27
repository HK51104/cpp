#include <iostream>
#include <string>
// used for using string functions

using namespace std;

class Binary
{
private:
    string s;
    // string here is a data type which is basicially a group of characters

public:
    void read(void);
    void CheckBinary(void);
    void Onescompliment(void);
    void display(void);
    // only function declaration here (no function defination)
};
// function defination here
void Binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void Binary::CheckBinary(void)
{
    read();
    // nested function
    for (int i = 0; i < s.length(); i++)
    // another string function s.length which basically says throughout the length of string
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        // as member of string they have single quotation
        // another string function which says "at" that position of the string
        {
            cout << "This is not a binary number" << endl;
            exit(0);
            // this basically means end of the program
        }
    }
}

void Binary::Onescompliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary::display(void)

{
    cout << "Displaying the binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    Binary b;

    b.CheckBinary();
    b.display();
    b.Onescompliment();
    b.display();
    return 0;
}
