#ifndef REDDIT_H_INCLUDED
#define REDDIT_H_INCLUDED


#ifndef CMON_H_INCLUDED
#define CMON_H_INCLUDED
void sorts( void *startNode, int numLinks)
{
    NODE *node;
    NODE *temp;
    NODE *first;
    NODE *thisNode;
    NODE *tempNode;
    first = (NODE*) startNode;
    node = (NODE*) startNode;

    NODE* sortedNode;

    /*temp = node->next;
    int valu1 = ((DATA*)node->dataPtr)->iValue;
    int valu2 = ((DATA*)temp->dataPtr)->iValue;*/

    printf("number of links:  %d\n\n",numLinks);

    for(int step=0; step<numLinks-1; step++)
    {
        temp = node->next;
        for(int i=0; i<numLinks-step-1; i++)
        {
            if(  ((DATA*)node->dataPtr)->iValue >   ((DATA*)temp->dataPtr)->iValue  )
            {

                if(node->prev==NULL)
                {
                    char c[10] = "first";
                    printf("This works %s\n\n",c);

                    startNode = thisNode->next;
                    tempNode = thisNode->next->next;
                    if (thisNode->next->next != NULL)
                    thisNode->next->next->prev = thisNode;
                    thisNode->next->next = thisNode;

                    thisNode->next->prev = NULL;
                    thisNode->prev = thisNode->next;
                    thisNode->next = tempNode;

                    printf("Value of first: %d  and value of second:  %d\n\n",((DATA*)node->dataPtr)->iValue , ((DATA*)temp->dataPtr)->iValue);
                }
                else if(temp->next==NULL)
                {
                    char d[10] = "last";
                    printf("This also works %s\n\n", d);
                   node->next = NULL;
                    temp->prev = node->prev;
                    temp->next->prev = node;
                    node->prev->next = temp;
                    node->prev = temp;
                    temp->next =node;
                    printf("Value of first: %d  and value of second:  %d\n\n",((DATA*)node->dataPtr)->iValue , ((DATA*)temp->dataPtr)->iValue);
                }
                else{

                    node->next = temp->next;
                    temp->prev = node->prev;
                    temp->next->prev = node;
                    node->prev->next = temp;
                    node->prev = temp;
                    temp->next =node;
                    printf("Value of first: %d  and value of second:  %d\n\n",((DATA*)node->dataPtr)->iValue , ((DATA*)temp->dataPtr)->iValue);
                }

            }
            temp = temp->next;
            node = node->next;
        }
    }

    /*if(((DATA*)node->dataPtr)->iValue <((DATA*)temp->dataPtr)->iValue)
    {
        sortedNode = node;
    }
    else{sortedNode = temp;}*/

}
/*unsigned int addNodenext;
                    unsigned int addNodeprev;
                    unsigned int addNode;

                    unsigned int addTempnext;
                    unsigned int addTempprev;
                    unsigned int addTemp;


                    addNodenext = node->next;
                    addNodeprev = node->prev;
                    addNode = node;
                    addTemp = temp;
                    addTempprev = temp->prev;
                    addTempnext = temp->next;*/
#endif // CMON_H_INCLUDED

#endif // REDDIT_H_INCLUDED
