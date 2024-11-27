#include<iostream>
#include<vector>
// header file used to use "vector"

using namespace std;

void display(vector <int> v)
// we cannot simply mention "v", we need to mention "vector<int>v"(according to my knowledge rn..)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        // we have written " " just to provide space between two elements in the output
    }
    // basically displaying the "elements of vector"
    cout<<endl;
    
};

int main(int argc, char const *argv[])
{
    vector <int> vec1;
    int element,size;
    cout<<"Enter size of vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element to add to this vector";
        cin>>element;
        vec1.push_back(element);
        // Vectors have a method(function), "push_back()", to insert elements in it from the rear end.
        /*
        "vec1" ka jo "function" hai "push_back" uss "function" ko humne 
        "parameter" provide kiya hai "element"
        basically "push_back" items add karta hai "vector" mein from rear end 
        toh ab vo "element" add karega given as a "parameter" 
        */
    }
    // removes the last item of "vector"
    display(vec1);
    // "display function" wants "vector" as "parameter"
    
    return 0;
}
