#ifndef CMON_H_INCLUDED
#define CMON_H_INCLUDED

void sorts( void *startNode, int numLinks)
{
    NODE *node;
    NODE *temp;
    NODE *first;
    first = (NODE*) startNode;
    node = (NODE*) startNode;

    /*temp = node->next;
    int valu1 = ((DATA*)node->dataPtr)->iValue;
    int valu2 = ((DATA*)temp->dataPtr)->iValue;*/

    printf("number of links:  %d\n\n",numLinks);

    for(int step=0; step<numLinks-1; step++)
    {
        temp = node->next;
        for(int i=0; i<numLinks-step-1; i++)
        {

            //int valu1 = ((DATA*)node->dataPtr)->iValue;
            //int valu2 = ((DATA*)temp->dataPtr)->iValue;
            unsigned int addValu1 = node;
            unsigned int addValu2 = temp;
            if(temp==NULL)
            {
                return;
            }
            printf("test:  valu1  %d  and valu2:   %d  address of valu1: %u and address of valu2: %u\n\n", ((DATA*)node->dataPtr)->iValue , ((DATA*)temp->dataPtr)->iValue,addValu1,addValu2);
            if(  ((DATA*)node->dataPtr)->iValue >   ((DATA*)temp->dataPtr)->iValue  )
            {
                if(node->prev==NULL)
                {
                    char c[10] = "first";
                    printf("This works %s\n\n",c);

                    unsigned int addValu3 = temp->next;//->next
                    unsigned int swapData = node;//12
                    //addValu1 = addValu2;//9
                    //addValu2 = swapData;//12
                    node = temp;//9
                    temp = swapData;//12
                    temp->prev = node;
                    temp->next = addValu3;
                    node->next = temp;
                    printf("Value of first: %d  and value of second:  %d\n\n",((DATA*)node->dataPtr)->iValue , ((DATA*)temp->dataPtr)->iValue);
                }
                else if(temp->next==NULL)
                {
                    char d[10] = "last";
                    printf("This also works %s\n\n", d);
                    unsigned int addValu0 = node->prev;
                    unsigned int swapData = addValu1;//12
                    addValu1 = addValu2;//9
                    addValu2 = swapData;//12
                    node = addValu1;//9
                    temp = addValu2;//12
                    temp->prev = node;
                    temp->next=NULL;
                    node->next = temp;
                    node->prev = addValu0;
                    printf("Value of first: %d  and value of second:  %d\n\n",((DATA*)node->dataPtr)->iValue , ((DATA*)temp->dataPtr)->iValue);
                }
                else
                {
                    unsigned int addValu3 = temp->next;
                    unsigned int addValu0 = node->prev;
                    unsigned int swapData = addValu1;//12
                    addValu1 = addValu2;//9
                    addValu2 = swapData;//12
                    node = addValu1;//9
                    temp = addValu2;//12
                    temp->prev = node;
                    temp->next = addValu3;
                    node->next = temp;
                    node->prev = addValu0;
                    printf("Value of first: %d  and value of second:  %d\n\n",((DATA*)node->dataPtr)->iValue , ((DATA*)temp->dataPtr)->iValue);
                }

            }
            temp = temp->next;
            node = node->next;
        }
    }
}
/*
        for(int i=1; i<numLinks-step-1; i++)
        {
            int valu1 = ((DATA*)node->dataPtr)->iValue;
            int valu2 = ((DATA*)temp->dataPtr)->iValue;
            printf("test:  valu1  %d  and valu2:   %d\n\n", valu1, valu2);

            if( valu1 > valu2  )
            {
                temp->prev = node->prev;
                if(temp->prev != NULL)
                {
                    temp->prev->next=temp;
                }
                else
                {
                    first = temp;
                }
                node->next = temp->next;
                if(node->next!=NULL)
                {
                    node->next->prev = node;
                }
                temp->next=node;
                node->prev=temp;
            }
            else
            {
                node=node->next;
            }

        }*/


        //Address
        /*temp = node->next;
            int valu1 = ((DATA*)node->dataPtr)->iValue;
            int valu2 = ((DATA*)temp->dataPtr)->iValue;
            unsigned int addValu1 = node;
            unsigned int addValu2 = temp;
            node = addValu2;
            temp = addValu1;
            printf("test:  valu1  %d  and valu2:   %d  number of links:  %d   address of valu1: %u and address of valu2: %u   using var addValu1: %u  using var addValu2: %u\n\n", valu1, valu2,numLinks,node,temp,addValu1,addValu2 );
            node = node->next;*/
#endif // CMON_H_INCLUDED
