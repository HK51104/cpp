#include<iostream>

using namespace std;
class Complex
{
    int real,imaginary;
    public:
    void GetData()
    {
        cout<<"the real part is: "<<real<<endl;
        cout<<"the imaginary part is: "<<imaginary<<endl;
    }

    void SetData(int a,int b)
    {
        real=a;
        imaginary=b;
    }
};

int main(int argc, char const *argv[])
{
    // one way to do it
    Complex c1;
    c1.SetData(1,54);
    c1.GetData();



    // another way to do it 
    Complex *ptr=&c1;
    /*since "c1" ek complex class ka object hai isi liye 
    uska data type bhi complex class walaa hai
    thus "ptr" naam ke "pointer" ka data type hai "complex" */
    (*ptr).SetData(1,54);
    /* kyuki "ptr" naam ka "pointer" point kara hai towards object c1
    that is ptr is storing the address of c1
    iss vajah se using "dereferencing (*)" "(*ptr)=c1"*/
    (*ptr).GetData();


    // another way to it
    Complex *p= new Complex;
    /*
     we can create a new "object" using this method
    (only "*p" can be changed in this statement
    except it everything will stay the same
    that is "Complex","new" will stay in place 
    */
    (*p).SetData(1,54);
    (*p).GetData();
// arrow operator mentioned in dsa 

    


    return 0;
}
