#ifndef CREATELINK_H_INCLUDED
#define CREATELINK_H_INCLUDED
#include <time.h>
#include "definitions.h"
/* Function to create a linked list of random numbers*/
void createDoubleLink( void* *startNode, int *iNodeTotals)
{
    NODE* node;
    NODE* previousNode;
    DTA *newData;
    int random_number;

    node = (NODE*) *startNode;

    srand(time(NULL));
    random_number = rand() % 100 + 1;

    printf("\nEnter the size of list: ");
    scanf("%d",iNodeTotals);

    for(int i=0; i<*iNodeTotals; i++)
    {
        random_number = rand() % 100 +1;
        newData = (DTA*)malloc(sizeof(DTA));
        newData->iPos = i+1;
        newData->iValue = random_number;
        node = createNode(newData);
        if (i == 0)
        {
            *startNode = node;
            node->next = NULL;
        }
        else
        {
            node->prev = previousNode;
            previousNode->next = node;
        }
        node->next = NULL;

        previousNode = node;

    }
}

#endif // CREATELINK_H_INCLUDED
