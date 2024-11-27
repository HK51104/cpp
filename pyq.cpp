#include <iostream>

using namespace std;

class Singleton
{
private:
    static bool isCreated; 
    /*
     Tracks whether an instance has been created
     ("static" here means this function will be carried and applied to each and every instance of this class)
    */
    Singleton()
    /*
    Private constructor(This ensures that the object cannot be created using Singleton obj; or new Singleton();.)
    */
    {
        cout << "Singleton object created!" << endl;
    }

public:
    /*
     Static method to create or get the Singleton object 
     When static is used in front of a function in a class, it means that the function is a static method, and it belongs to the class itself rather than to an instance (object) of the class.
     In other words, you don’t need an object of the class to call this function. Instead, it can be called using the class name itself.
     */
    static Singleton *createInstance()
    {
        if (isCreated)
        {
            cerr << "Error: Only one object can be created!" << endl;
            exit(EXIT_FAILURE); // Terminate the program
        }
        isCreated = true;
        return new Singleton();
    }
};

// Initialize the static variable
bool Singleton::isCreated = false;

int main()
{
    // First object creation succeeds
    Singleton *obj1 = Singleton::createInstance();

    // Second object creation fails
    Singleton *obj2 = Singleton::createInstance(); // Program terminates here

    return 0;
}
