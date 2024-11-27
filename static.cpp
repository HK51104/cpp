#include <iostream>

using namespace std;

class employee
{
private:
    int id;
    static int count /*=1000(will be invalid here but)*/;
    /* 
    by adding "static" we make the value of "count" variable continous for
    each "object(in this case happy,tushu,harsh)" of the class
     */ 

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }

    void getdata(void)
    {
        cout << "the Id of the employee is " << id <<" and this is employee number "<<count<<endl;
    }

    static void getcount(void)
    // static function can only access static variables
    {
        cout<<"the value of count is "<<count<<endl;
        // cout<<id;
        // ( thus this would be invalid )
    }
};
int employee::count/*=1000(would be valid here)*/;
int main(int argc, char const *argv[])
{
    employee happy, tushu, harsh;

    happy.setdata();
    happy.getdata();
    employee::getcount;

    tushu.setdata();
    tushu.getdata();
    employee::getcount;

    harsh.setdata();
    harsh.getdata();
    employee::getcount;

    return 0;
}
