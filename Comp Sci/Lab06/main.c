#include <stdio.h>
#include <stdlib.h>
#include "headers.h"


int main(int argc, char *argv[])
{
    WHOLE_NUM x,y,d,r;
    x=9;
    y=2;
    returnValue = division(x,y,&d,&r);
    printf("Returned Value (RT): = %f \n", returnValue);
    printf("%d/%d = %d with %d remainder\n",x,y,d,r);
    printf("x=%d\n",x);
    return 0;
}

