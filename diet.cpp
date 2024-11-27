#include <iostream>

using namespace std;

class DIET
{
public:
    
    void CALORIE()
    {
        int c1, c2, c3, c4, c5;
        cout << "ENTER YOUR CALORIES EATEN" << endl;
        cin >> c1, c2, c3, c4, c5;
        cout << "YOUR TOTAL CALORIES EATEN=" << C << endl;
        int C = SUM(c1, c2, c3, c4, c5);
        if (C > 2500)
        {
            cout << "YOU ARE DOING GREAT!!" << endl;
        }
        else
        {
            cout << "YOU LACK CALORIES BY " << C - 2500 << endl;
        }
    }

    int SUM(a, b, c, d, e)
    {
        int a1 = a;
        int b2 = b;
        int c3 = c;
        int d4 = d;
        int e5 = e;
        return a1 + b2 + c3 + d4 + e5;
    }

};

int main(int argc, char const *argv[])
{
    DIET H;
    H.CALORIE();
    return 0;
}
