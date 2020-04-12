#include <stdio.h>
#include <stdlib.h>
#include "definitions.h"

int main()
{
    STACK* stack;
    int count;

    stack = createStack();

    createDoubleLink(stack);

    printLink(stack);

    releaseLinks(stack);
    return 0;

}
