#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    map <string,int> marks;
    marks["Happy"]=99;
    // "names" are the "key" and "marks" are the "corresponding value"
    marks["Harshi"]=95;
    // this is the way to make elements in "map"
    marks["Tushu"]=96;
    marks["Bawri"]=97;

 map <string,int> :: iterator iter;
//  iterator(same as list)
 for (iter=marks.begin(); iter!=marks.end(); iter++)
 /*
 "iter" starting from "beginning of marks"
 will run till "iter" doesn't reach "end of marks"
 till then "iter" will keep adding by 1
 */
 {
    cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    /*
    print the "first item(key) of iter(i.e name here)"
    and then 
    print the "second item(corresponding value) of iter(i.e marks here)"
    */
 }
 
    return 0;
}
