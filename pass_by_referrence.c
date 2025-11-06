#include <stdio.h>

void fun(int *ptr)
{
    *ptr=20000;

}


int main()
{
    int x=10;
    fun(&x);  //ata dia ami x er address ta *ptr e pataisi erpr * ptr dara ami back 
              // x e ashe man t achange kore disi 
    printf("%d",x);
   return 0;
}