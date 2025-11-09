#include <stdio.h>
int main()
{
  int a[10]={10,2,3,4,45,5,6,3};
  *a=100;             //*(a+2) dile 3 value change hbe 
  printf("%p\n",&a[0]);

  for(int i=0;i<10;i++)
  {
    printf("%d ",a[i]);
  }
 return 0;
}