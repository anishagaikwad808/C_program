#include <stdio.h>
#include <conio.h>

int main()
{
                int Num [5] = { 15, 59, 88, 27, 65 };

                int *ptr = &Num [4];

                printf( " \n Base Address Of Array Is = %d ",Num);  //532812432

                printf( " \n Value In Pointer Is = %d ",ptr);       //532812448

                printf( " \n Value Of Array Element Where Pointer Pointing = %d ",*ptr);. //65

                getch();

                ptr = ptr - 2;
    

                printf( " \n  New Value In Pointer Is = %d ",ptr);      //532812445

                printf( " \n Value Of Array Element Where Pointer Pointing = %d ",*ptr);    //88
   
}
