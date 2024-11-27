#include<iostream>

using namespace std;

class Y;
// therefore yahan mention(declare) kara gya hai class Y
class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);
 //here compiler doesn't know what is y therefore (upar)... 
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
    friend void add(X, Y);    

};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects gives me "<< o1.data + o2.num;
}

int main(){
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1);
    return 0;
}

