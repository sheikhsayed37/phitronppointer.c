#include <stdio.h>

void fun(char st[],int n)
{
 printf("%s",st);
}



int main()

{
char st[10];
scanf("%s",&st);
fun(st,10);
}