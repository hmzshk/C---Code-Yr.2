#ifndef INSERTLINK1_H_INCLUDED
#define INSERTLINK1_H_INCLUDED

#include "definitions.h"
#include "CreateNode.h"

void sortedInsert(void *startNode,int numLinks)
{
    NODE* current;
    NODE* node;
    NODE* newNode;
    node = (NODE*) startNode;

    int random_number;
    srand(time(NULL));
    random_number = rand() % 100 + 1;

    int position = numLinks+1;
    DATA* nuNode;
    nuNode = (DATA*)malloc(sizeof(DATA));
    nuNode->iPos=position;
    nuNode->iValue=random_number;

    newNode = createNode(nuNode);
    position++;
    // if list is empty
    if (node == NULL)
        node = newNode;

    // if the node is to be inserted at the beginning
    // of the doubly linked list
    else if (  ((DATA*)node->dataPtr)->iValue >= ((DATA*)newNode->dataPtr)->iValue)
    {
        newNode->next = node;
        newNode->next->prev = newNode;
        node = newNode;
    }

    else {
        current = node;

        // locate the node after which the new node
        // is to be inserted
        while (current->next != NULL && ((DATA*)current->next->dataPtr)->iValue < ((DATA*)newNode->dataPtr)->iValue )
            current = current->next;

        /* Make the appropriate links */
        newNode->next = current->next;

        // if the new node is not inserted
        // at the end of the list
        if (current->next != NULL)
            newNode->next->prev = newNode;

        current->next = newNode;
        newNode->prev = current;
    }
}

#endif // INSERTLINK1_H_INCLUDED
