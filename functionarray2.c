#include <stdio.h>



void fun(int a[])
{
   for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);

    }  
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,9};
     fun(a);
 
}