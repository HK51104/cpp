#include <iostream>
#include <string>  // Optional: Include for string manipulation if needed

using namespace std;

class Student {
protected:
    int rollno;
public:
    void setNumber(int a) {
        rollno = a;
    }

    void printNumber() {
        cout << "Your roll no is " << rollno << endl;
    }
};

class Test {
protected:
    float maths, physics;
public:
    void setMarks(float m1, float m2) {
        maths = m1;
        physics = m2;
    }

    void printMarks() {
        cout << "Your result is here" << endl;
        cout << "Maths: " << maths << endl;
        cout << "Physics: " << physics << endl;
    }
};

class Sports {
protected:
    float score;
public:
    void setScore(float sc) {
        score = sc;
    }

    void printScore() {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Student, public Test, public Sports {  // Use multiple inheritance cautiously
public:
    void display() {
        float total = maths + physics + score;
        printNumber();
        printMarks();
        printScore();
        cout << "Your total score is " << total << endl;
    }
};

int main(int argc, char const *argv[]) {
    Result happy;
    happy.setNumber(4200);
    happy.setMarks(60, 99.6);
    happy.setScore(9);
    happy.display();
    return 0;
}