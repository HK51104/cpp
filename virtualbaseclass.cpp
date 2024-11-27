#include <iostream>

using namespace std;

class Student
{
protected:
    int rollno;

public:
    void setnumber(int a)
    {
        rollno = a;
    }
    void printnumber(void)
    {
        cout << "your roll no is " << rollno << endl;
    };
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void printmarks(void)
    {
        cout << "your result is here" << endl;
        cout << "maths " << maths << endl;
        cout << "physics " << physics << endl;
    }
};
class Sports : virtual  public Student
{
protected:
    float score;

public:
    void setscore(float sc)
    {
        score = sc;
    }

    void printscore(void)
    {
        cout << "your PT score is" << score << endl;
    }
};
class Result :  public Test,  public Sports, virtual public Student
{
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        printnumber();
        printmarks();
        printscore();
        cout << "your total score is" << total << endl;
    }
};
int main(int argc, char const *argv[])
{
    Result happy;
    happy.setnumber(4200);
    happy.setmarks(60, 99.6);
    happy.setscore(9);
    happy.display();
    return 0;
}
 
 