#include <stdio.h>



void fun(int a[])
{
    a[3]=300;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,9};//array work as a pointer 
                      //as usuallay akne 3 no value ta change hower kotha na bt array pointer 
                      // niomee kaj kortese ortat direct reffernce ba nijer identity pass kore dise
     fun(a);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);

    }
}