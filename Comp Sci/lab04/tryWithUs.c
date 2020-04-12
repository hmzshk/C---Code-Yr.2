/* CS1037a 2019 */
/* Lab 04 */
/* Yuxuan Zhang */
/* October 3, 2019 */

#include <stdio.h>
#include <stdlib.h>

    void printBits(size_t const size,void const * const ptr);

int main()
{
    int iArray[7];
    double dArray[2];
    printf("Input 7 elements in the array :\n");
    for(int i=0;i<7;i++)
    {
        printf("element - %d:", i);
        scanf("%d",&iArray[i]);
    }

    printf("\n");
    printf("Project 1:\n");
    printf("The values store into the array are : \n");
    for(int i=0;i<7;i++)
    {
        printf("%d    ",iArray[i]);
    }
    printf("\n");
    dArray[4] = 13.23;
    printf("\n\nfloat: %f\n",dArray[4]);
    printf("\n");
    printf("LABEL   -   ADDRESS(hex)    ADDRESS (dec)   [S - E]   -   VALUE     -    BINARY\n");

    for(int i=0;i<7;i++)
    {
        printf("a[%d]  -    ",i);
        printf("%p   -     ",&iArray[i]);
        printf("%d   -  %d      ", (int)&iArray[i], (int)&iArray[i] + sizeof(iArray[i])-1);
        printf("%d   -      " , iArray[i]);
        printBits(sizeof(iArray[i]), &iArray[i]);
        printf("\n---------------------------------------\n");

    }


        return 0;
}

//assumes little endian
void printBits(size_t const size, void const * const ptr)
{
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i=size-1;i>=0;i--)
    {
        for (j=7;j>=0;j--)
        {
            byte = (b[i] >> j) & 1;
            printf("%u", byte);
        }
        printf(" ");
    }
    puts(" ");
}

