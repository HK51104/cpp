#include <iostream>
#include <string>

using namespace std;

class CWH
{
protected:
    string title;
    //"string" is a type specifier that is used to declare a string object
    // it is not a data type 
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {

    }
};
class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r , float vl) : CWH(s,r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc):CWH(s,r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    /*
    since we need to pass all the "variables" to the "constructors" made above
    we are initializing the "variables" here 
    (another method to pass the "variables" is to directly pass them through 
    while creating "object" of that "class"(indirectly calling constructor) )
    but here we are passing it 
    by first initializing it 
    and then 
    giving it a value 
    and then passing the value indirectly 
    */

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH *tuts[2];
    /*
    since "tuts" ek "CWH class" ka "array of object" hai isi liye 
    uska data type bhi "CWH" class walaa hai
    thus "tuts" naam ke "pointer" ka data type hai "CWH"
    */
/*
since "CWH" ek "base class" hai 
therefore 
we can call "functions" of "derived class"
using pointers of the data type "CWH"
that is why we have used "CWH *tuts"
*/
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
/* 
The main thing to note here is that 
if we don’t use the “virtual” keyword with the “display” function of the base class
then the “display” function of the base class will run.
*/
/*
so when the "display function" is called by using the "base class pointer" 
the "display function" of the "derived class" will run because
the "base class pointer" is pointing to the "derived class object".
*/
    return 0;
}
/*
previously we faced a problem of
{
if we have made "baseclasspointer" then it can only access the 
"properties"(variable in class) and "methods"(functions in class)
inherited from "baseclass".
even though it points towards "object of derived class" 
still it cannot access it
}
this problem is solved in this "code" using keywrod "virtual"
*/