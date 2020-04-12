#include <stdio.h>
#include <stdlib.h>


     void printBits(size_t const size, void const * const ptr);

int main()
{
    int iArray[7];
    double dArray[2];

    printf("\n-------------------------------------------------------------------------------------------\n");

    printf("Label    -    ADDRESS(hex)    ADDRESS  (dec)   [S-E]   -   VALUE     -    BINARY\n");

    printf("a[0]   -         ");
    printf("%p   -     ",&iArray[0]);
    printf("%d   -   %d         ",(int)&iArray[0], (int)&iArray[0]   +   sizeof(iArray[0])-1);
    printf("%d  -        ",iArray[0]);
    printBits(sizeof(iArray[0]), &iArray[0]);
    printf("\n--------------------------------------------------------------------------------------------\n");

    printf("a[1]  -      ");
    printf("%p   -   ",&iArray[1] );
    printf("%d   -   %d            ",(int)&iArray[1] , (int)&iArray[1]    +   sizeof(iArray[1] )-1);
    printf("%d  -        ",iArray[1] );
    printBits(sizeof(iArray[1] ), &iArray[1] );
    printf("\n---------------------------------------------------------------------------------------------\n");

    printf("a[2]  -      ");
    printf("%p   -      ",&iArray[2] );
    printf("%d   -    %d         ",(int)&iArray[2] , (int)&iArray[2]    +   sizeof(iArray[2] )-1);
    printf("%d  -        ",iArray[2] );
    printBits(sizeof(iArray[2] ), &iArray[2] );
    printf("\n---------------------------------------------------------------------------------------------\n");

    printf("a[3]  -      ");
    printf("%p   -   ",&iArray[3] );
    printf("%d   -   %d    ",(int)&iArray[3] , (int)&iArray[3]    +   sizeof(iArray[3] )-1);
    printf("%d  -     ",iArray[3] );
    printBits(sizeof(iArray[3] ), &iArray[3] );
    printf("\n---------------------------------------------------------------------------------------------\n");

    return 0;
}

//assumes little endian
/*void printBits(size_t const size, void const * const ptr)
{
    int &iArray[1]  = (int*) ptr;
    unsigned char byte;
    int i, j;

    for (i=size-1;i>=0;i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = (iArray[1] [i] >> j) & 1;
            printf("%u", byte);
        }
        printf(" ");
    }
    puts("");
}
*/


