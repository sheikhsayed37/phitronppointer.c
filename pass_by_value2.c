#include <stdio.h>
void fun(int x)
{
    x=20;
  printf("fun adress = %p\n",&x);

}     // doiter e address alada



int main()
{
    int x=10;
    fun(x);
    printf("fun adress = %p\n",&x);

}
