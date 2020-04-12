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

    NODE *sortedNode;

    /*temp = node->next;
    int valu1 = ((DATA*)node->dataPtr)->iValue;
    int valu2 = ((DATA*)temp->dataPtr)->iValue;*/

    printf("number of links:  %d\n\n",numLinks);

    for(int step=0; step<numLinks-1; step++)
    {
        // temp = node->next;// remove by Ria
        for(int i=0; i<numLinks-step-1; i++)
        {
            temp= node->next;
            //int valu1 = ((DATA*)node->dataPtr)->iValue;
            //int valu2 = ((DATA*)temp->dataPtr)->iValue;
            unsigned int tempVar;
            //unsigned int addValu1 = node;
            unsigned int addValu1;
            unsigned int addValue2;

            tempVar = first-> next;


            //unsigned int addValu2 = temp;
            //printf("test:  valu1  %d  and valu2:   %d  address of valu1: %u and address of valu2: %u\n\n", ((DATA*)node->dataPtr)->iValue , ((DATA*)temp->dataPtr)->iValue,addValu1,addValu2);
            if(  ((DATA*)node->dataPtr)->iValue >   ((DATA*)temp->dataPtr)->iValue  )
            {
                if(node->prev==NULL)
                {
                    printf("Inside node previous for %d \n", ((DATA*)node->dataPtr)->iValue);
                    printf("Inside temp previous  for %d \n", ((DATA*)temp->dataPtr)->iValue);
                    startNode = temp;
                    tempNode = temp->next;
                    if (temp->next != NULL)
                    temp->next->prev = node;
                    temp->next = node;

                    temp->prev = NULL;
                    node->prev = node->next;
                    temp = tempNode;

                    while(temp != NULL)
                    {

                      printf("%d after swapping \n",((DATA*)temp->dataPtr)->iValue);
                      printf("%u value  \n", temp->next);

                      temp = temp->next;
                    }

                   //printf("Value of first: %d  and value of second:  %d\n\n",((DATA*)node->dataPtr)->iValue , ((DATA*)temp->dataPtr)->iValue);
                }
                else if(temp->next==NULL)
                {


                    unsigned int tempVar1;

                    temp->next = temp->prev;
                    tempVar1=  node -> next;

                    node->next = NULL;
                    node->prev->next= tempVar1;
                    temp->prev= node->prev;
                    node->prev=tempVar1;


                }
                else
                {
                    unsigned int temp1 = node-> next;
                    unsigned int temp2 = node-> prev;

                    node-> next= temp->next;
                    node->prev = temp1;

                    temp-> next = temp-> prev;
                    temp-> prev = node -> prev;

                    node->prev->next= temp->prev;

                }

            }
            //temp = temp->next;
            node = node->next;
        }
        node = node->next;
    }

}
/*node-> next= temp->next;
                    node->prev = tempVar;

                    temp-> next = temp->prev;
                    temp->prev = NULL;*/
#endif // CMON_H_INCLUDED
