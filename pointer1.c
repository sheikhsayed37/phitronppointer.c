#include <stdio.h>
int main()
{
    int x=10; 
    printf("%d\n",x);
    printf("%d\n",&x);
  int *ptr;
  ptr=&x;
  printf("%d",ptr);
  return 0;
}