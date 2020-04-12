/* CS1037a 2019 */
/* Lab 02 */
/* Hamza Shaikh */
/* September 19, 2019 */


#include <stdio.h>
#include <stdlib.h>

    void printBits(size_t const size, void const * const ptr);

int main()
{

    char a;
    int b;
    float c;
    double d;

    a=7;
    b=-13;
    c=0.1;
    d=42.5;

    printf("\n-------------------------------------------------------------------------------------------\n");

    printf("Label    -    ADDRESS(hex)    ADDRESS  (dec)   [S-E]   -   VALUE     -    BINARY\n");

    printf("A   -         ");
    printf("%p   -     ",&a);
    printf("%d   -   %d         ",(int)&a, (int)&a   +   sizeof(a)-1);
    printf("%d  -        ",a);
    printBits(sizeof(a), &a);
    printf("\n--------------------------------------------------------------------------------------------\n");

    printf("B  -      ");
    printf("%p   -   ",&b);
    printf("%d   -   %d            ",(int)&b, (int)&b   +   sizeof(b)-1);
    printf("%d  -        ",b);
    printBits(sizeof(b), &b);
    printf("\n---------------------------------------------------------------------------------------------\n");

    printf("C  -      ");
    printf("%p   -      ",&c);
    printf("%d   -    %d         ",(int)&c, (int)&c   +   sizeof(c)-1);
    printf("%f  -        ",c);
    printBits(sizeof(c), &c);
    printf("\n---------------------------------------------------------------------------------------------\n");

    printf("D  -      ");
    printf("%p   -   ",&d);
    printf("%d   -   %d    ",(int)&d, (int)&d   +   sizeof(d)-1);
    printf("%lf  -     ",d);
    printBits(sizeof(d), &d);
    printf("\n---------------------------------------------------------------------------------------------\n");

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
    puts("");
}
