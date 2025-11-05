#include <stdio.h>
int main()
{
    int x=10;
    printf("%d\n",x);
    printf("%p\n",&x);  // & mane address mean kore ..
                          //*ptr dara moloto adress bojano hoi
                         //dereferencing   
                        //akne ami just pointer er repect e x er value ta change kors                  
    int *ptr;
    ptr=&x;
    printf("%p\n",&x); // x er address print korbe & holo address.
    printf("%p\n",ptr); //ptr e x er address reke dia print korsi ptr
    printf("%p\n",&ptr); //ptr er o akta address ase seta print kori ..& dara ptr er akta address k define kore
    *ptr=2000000;
    printf("%d\n",x);
     
    return 0;

}