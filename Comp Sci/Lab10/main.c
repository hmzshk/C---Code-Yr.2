#include <stdio.h>
#include <stdlib.h>
#include"definitions.h"
int main()
{
    void *vPointer;
    int iTotalLinks;

    createDoubleLink(&vPointer,&iTotalLinks);

    printLink(vPointer,iTotalLinks);

    releaseLinks(vPointer);
    return 0;
}
