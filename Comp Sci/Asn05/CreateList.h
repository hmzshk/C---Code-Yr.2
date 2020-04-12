#ifndef CREATELIST_H_INCLUDED
#define CREATELIST_H_INCLUDED
#include <time.h>

//Creates the first node in the linked list and then uses a for loop to create and link the rest of the nodes.
void createDoubleLink( void** startNode, int *iNodeTotals)
{
    NODE* node;
    NODE* previousNode;
    DATA *newData;
    int random_number;
    int numElements;

    node = (NODE*) *startNode;

    srand(time(NULL));
    random_number = rand() % 100 + 1;

    printf("\nEnter the size of list: ");
    scanf("%d", iNodeTotals);

    for(int i=0; i<*iNodeTotals; i++)
    {
        random_number = rand() % 100 +1;
        newData = (DATA*)malloc(sizeof(DATA));
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

#endif // CREATELIST_H_INCLUDED
