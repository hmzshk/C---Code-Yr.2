/* CS1037a 2019 */
/* Assignment 05 */
/* Hamza shaikh */
/* 251041178 */
/* hshaik24 */
/* Dec 03, 2019 */


#include <stdio.h>
#include <stdlib.h>
#include "definitions.h"
#include "CreateNode.h"
#include "printList.h"
#include "CreateList.h"
#include "releaseMemory.h"
#include "CMON.h"
#include "insertLink1.h"s
int main()
{
    void *vPointer;
    int iTotalLinks;

    createDoubleLink(&vPointer,&iTotalLinks);

    printLink(vPointer,iTotalLinks);

    sorts(vPointer, iTotalLinks);
    //sorts(vPointer, iTotalLinks);

    printf("After Sorting");

    printLink(vPointer,iTotalLinks);

    sortedInsert(vPointer,iTotalLinks);

    printLink(vPointer,iTotalLinks);

    releaseLinks(vPointer);
    return 0;
}


