#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int *h= new int(5);
    cout<<"the value stored at address h is "<<*h<<endl;
    // dynamically used pointer 

    int *arr=new int[4];
    arr[0]=10;
    *(arr+1)=20;
    // "*"-->value of , (arr+1)--> arr[0]+1 =arr[1]
    // thus the whole thing is read as 
    // the value of arr[1]=20 
    arr[2]=30;
    delete[] arr;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
   // dyanmically used the pointer to make array and deleted it using "delete"
    return 0;
}
