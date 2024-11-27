#include <iostream>

using namespace std;

class shop
{
private:
    int Id[10];
    int price[10];
public:
    int index = 0;
    void setprice()
    {
        cout << "Enter Id of your item number " << index + 1 << endl;
        cin >> Id[index];
        /* we directly cannot write the value of an array
         we need to write the value of the nth memeber of array */
        cout << "Enter price of your item " << endl;
        cin >> price[index];
        index++;
    }
    void displayprice()
    {
        for (int i = 0; i < index; i++)
        {
            cout << "For Item number " << i + 1 << endl;
            cout << "The price is " << price[i] << endl;
        }
    }
};
int main(int argc, char const *argv[])
{
    shop dukaan;
    int n;
    cout << "How many Items do you want?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        dukaan.setprice();
    }
    dukaan.displayprice();
    return 0;
}
