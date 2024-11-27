#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x,y,k,count;
    for (int i = 0; i < 3; i++)
    {
     for (int j = 0; j < 3; j++)
     {
        k=i;
        k++;
        x=y+1;
        count++;
     }
      printf("%d\n",count);
    }
   
    return 0;
}
