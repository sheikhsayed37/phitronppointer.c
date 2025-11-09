#include <stdio.h>
int main()
{
  int a[10]={10,2,3,4,45,5,6,6};
  printf("%p\n",&a[0]);
  printf("%d\n",*a); // array pointer er moto aibabe kaj kore
                     // moloto first value ta print kore dise
}