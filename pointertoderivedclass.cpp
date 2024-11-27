#include <iostream>

using namespace std;

class BaseClass
{
public:
    int varbase;
    void display()
    {
        cout << "displaying base class variable varbase " << varbase << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int varderived;
    void display()
    {
        cout << "displaying base class variable varbase " << varbase << endl;
        cout << "displaying derived class variable varderived " << varderived << endl;
    }
};
int main(int argc, char const *argv[])
{
    BaseClass *baseclasspointer;
    BaseClass objbase;
    DerivedClass objderived;
    baseclasspointer = &objderived;
    /* 
    we are pointing towards "object of derived class" using the pointer 
    of data type "baseclass"
   */
    baseclasspointer->varbase=34;
    
    baseclasspointer->display();
    /*
    it will run "display" function of "baseclass"
    this is because 
    although the "pointer" point towards the "object of derived class"  
    but the "pointer" is of base class and hence it happens.
    */
//    baseclasspointer->varderived=50;
   /*
   this wont happen because
   if we have made "baseclasspointer" then it can only access the 
   "properties"(variable in class) and "methods"(functions in class)
   inherited from "baseclass".
   even though it points towards "object of derived class" 
   still it cannot access it
   */
  baseclasspointer->varbase=5000;
  baseclasspointer->display();

  DerivedClass *derivedclasspointer;
  derivedclasspointer=&objderived;
  derivedclasspointer->varbase=500;
  derivedclasspointer->varderived=98;
  derivedclasspointer->display();
    return 0;
}
