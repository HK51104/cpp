#include<iostream>

using namespace std;

  struct Employee
    {
        int id;
        char name;
        float salary;
    } Happy,Tushu,mayank;

int main(int argc, char const *argv[])
{
  
//    struct Employee Happy;
//    struct Employee Tushu; 
//    struct Employee mayank; 
   Happy.id=5;
   Tushu.id=6;
   mayank.id=7;
   Happy.name='H';
   Tushu.name='T';
   mayank.name='B';
   Happy.salary=500;
   Tushu.salary=500;
   mayank.salary=500;
   cout<<Happy.id<<endl;
   cout<<Tushu.id<<endl;
   cout<<mayank.id<<endl;
   cout<<Happy.name<<endl;
   cout<<Tushu.name<<endl;
   cout<<mayank.name<<endl;
   cout<<Happy.salary<<endl;
   cout<<Tushu.salary<<endl;
   cout<<mayank.salary<<endl;
    return 0;
}
