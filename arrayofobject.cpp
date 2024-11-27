#include<iostream>

using namespace std;
class Shop
{
    int id;
    float price;

    public:
    void SetData(int a,float b)
    {
       id = a;
       price =b;
    }
    void GetData()
    {
     cout<<"code of this item is "<<id<<endl;
     cout<<"price of this item is "<<price<<endl;
    }
    
};


int main(int argc, char const *argv[])
{
    int size=2;
    // array of objects
    Shop *ptr= new Shop[size];
    /* 
    "Shop" name ka array of objects hai  
    jiske andar "2 objects" honge because
    upar it is mentioned "size"=2
     */
    /*
    idhar basically "object" kisi naam se nahi banaya infact 
    idhar "objects" toh hai but unka naam nahi hai 
    unn "objects" ko banaya gaya hai and access kara jaaraa hai 
    using "pointer" (in this case "ptr")
    */
    Shop *ptrtemp=ptr;
    /*
    this basically means that the "pointer" "ptrtemp"
    is pointing towards "ptr" and further more 
    "ptr" is pointing towards the " array of objects of the class"
    thus it is a way to access the "objects of the class" (without
    being totally dependent on "ptr" by which I mean ki 
    if "ptr" would be running for the "object number 2"
    it isnt necessary for "ptrtemp" to also run for "object number 2"
    just because "ptr" is running for "object 2" as it is only pointing
    "ptr(indirectly the objects)" thus it can run for "object number 1"
    even if the "ptr" is running for "object number 2" or so on....) 
    */
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter id and price of item "<<i+1<<endl;
        cin>>p>>q;
        ptr->SetData(p,q);
        /*
         in "main" it doesnt know what is "SetData" therefore 
         we have mentioned jo "ptr" hai of the data type 
         " class shop " uske andar hai ek function 
         "SetData" (basically we gave reference of "SetData" function 
         to "main" because iss reference se pehle "main" nahi jaanta tha 
         "SetData" ko)    
         */
        ptr++;
        /*
        basically jab iske upar "SetData function" run hua tha 
        vo run hua the for "object number 1" i.e for "object number 1"
        ke liye humne "id and price" pata kar liya using the function
        "SetData"
        now humein ye same kaam "next object" ke liye bhi karna hai 
        so that is why we have done "ptr++" which means 
        jo upar likha hai "ptr->setdata()" ab vo "setdata" run hoga 
        for the "next object" (basically it will run for (ptr+1) 
        which is ultimately pointing the next object)
        */
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<"Item number : "<<i+1<<endl;
        ptrtemp->GetData();
        /*
         in "main" it doesnt know what is "GetData" therefore 
         we have mentioned jo "ptrtemp" hai of the data type 
         " class shop " uske andar hai ek function 
         "GetData" (basically we gave reference of "GetData" function 
         to "main" because iss reference se pehle "main" nahi jaanta tha 
         "GetData" ko)    
         */
        ptrtemp++;
        /*
        basically jab iske upar "GetData function" run hua tha 
        vo run hua the for "object number 1" i.e for "object number 1"
        ke liye humne "code and price" ko print kar liya using the function
        "GetData"
        now humein ye same kaam "next object" ke liye bhi karna hai 
        so that is why we have done "ptrtemp++" which means 
        jo upar likha hai "ptrtemp->getdata()" ab vo "getdata" run hoga 
        for the "next object" (basically it will run for (ptrtemp+1) 
        which is ultimately pointing the next object)
        */ 
    }
    
    return 0;
}






