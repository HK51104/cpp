#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student::set_roll_number(int r)
{
    roll_number = r;
    /* since "roll number " is "protected" it cannot be given value in "main function"
    therefore we are assigning its value here */
};
void Student ::get_roll_number()
{
    cout << "the roll number is " << roll_number << endl;
};
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam::set_marks(float m1, float m2)
    /* since "maths and physics " are "protected" it cannot be given value in "main function"
    therefore we are assigning its value here */
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "the marks obtained in maths are :" << maths << endl;
    cout << "the marks obtained in physics are :" << physics << endl;
};
class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        /*since the "RESULT" class is inherited "publically" 
        we can use the function from its base class (and uski bhi base class)*/
        cout << "your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
}; 
int main(int argc, char const *argv[])
{
    Result happy;
    happy.set_roll_number(5);
    happy.set_marks(90,90);
    happy.display();
    return 0;
}
