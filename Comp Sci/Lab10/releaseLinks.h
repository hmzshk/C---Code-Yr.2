#ifndef RELEASELINKS_H_INCLUDED
#define RELEASELINKS_H_INCLUDED

void releaseLinks( void* startNode)
{
    NODE *node;
    NODE *delNode;
    DTA *newData;

    node = (NODE*) startNode;

    while(node!=NULL)
    {
        newData = node->dataPtr;
        free(newData);

        delNode = node;
        node = node->next;
        free(delNode);
    }

    printf("\nAll Dynamically Allocated Memory has successfully been released.\n\n");
    printf("\n\n");
}


#endif // RELEASELINKS_H_INCLUDED
