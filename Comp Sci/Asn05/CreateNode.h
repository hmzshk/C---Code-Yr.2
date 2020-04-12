#ifndef CREATENODE_H_INCLUDED
#define CREATENODE_H_INCLUDED

NODE* createNode(void* itemPtr)
{
    NODE* nodePtr;
    nodePtr = (NODE*)malloc(sizeof(NODE));
    nodePtr->dataPtr = itemPtr;
    nodePtr->next = NULL;
    nodePtr->prev = NULL;
    return nodePtr;
}

#endif // CREATENODE_H_INCLUDED
