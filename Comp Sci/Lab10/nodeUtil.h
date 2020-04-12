#ifndef NODEUTIL_H_INCLUDED
#define NODEUTIL_H_INCLUDED

NODE* createNode (void* itemPtr)
{
    NODE* nodePtr;
    nodePtr = (NODE*)malloc(sizeof(NODE));
    nodePtr->dataPtr = itemPtr;
    nodePtr->next = NULL;
    nodePtr->prev = NULL;
    return nodePtr;
} // createNode

#endif // NODEUTIL_H_INCLUDED
