#ifndef UTILITIES_H_INCLUDED
#define UTILITIES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct dataStruct
{
    int pos;
    int value;
} DTA;

typedef struct node
{
    void* dataptr;
    struct node* next;
    struct node* prev;
} NODE;

NODE* createnode (void* itemptr)
{
    NODE* nodeptr;
    nodeptr = (NODE*)malloc(sizeof(NODE));
    nodeptr->dataptr = itemptr;
    nodeptr->next = NULL;
    nodeptr->prev = NULL;
    return nodeptr;
}

void createdoublelink (void** topnode, int* nodetotal)
{
    NODE* node;
    NODE* prevnode;
    DTA* data;

    node = (NODE*) topnode;

    srand(time(NULL));

    printf("\nEnter the size of List: ");
    scanf("%d", nodetotal);

    for (int i = 0; i < *nodetotal; i++)
    {
        int random_number = rand() % 100 + 1;
        data = (DTA*)malloc(sizeof(NODE));
        data->pos = i+1;
        data->value = random_number;
        node = createnode(data);
        if (i==0)
        {
            *topnode = node;
            node->next = NULL;
        }
        else
        {
            node->prev = prevnode;
            prevnode->next = node;
        }

        prevnode = node;
    }

}

void printlink(void* topnode, int totalnode)
{
    NODE* node;

    node = (NODE*) topnode;

    printf("\nLinear print out of link list with %d nodes (elements)\n\n", totalnode);
    while(node)
    {
        printf ("Node: %d: Value: %d\n", ((DTA*)node->dataptr)->pos, ((DTA*)node->dataptr)->value); //Why?
        node = node->next;
    }
    printf("\n\n");
}

void releaselinks(void* topnode)
{
    NODE *node;
    NODE *delnode;
    DTA *data;

    node = (NODE*) topnode;

    while(node)
    {
        data = node->dataptr;
        free(data);

        delnode = node;
        node = node->next;
        free(delnode);
    }

    printf("\nAll dynamically allocated memory has been successfully released.\n\n");
}

#include "bubblesort.h"
#include "insertlink.h"

#endif // UTILITIES_H_INCLUDED
