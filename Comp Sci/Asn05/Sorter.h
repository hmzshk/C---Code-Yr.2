#ifndef CMON_H_INCLUDED
#define CMON_H_INCLUDED

NODE* sorts( void *startNode, int numLinks)
{
    NODE *node;
    NODE *temp;
    NODE *first;
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


                    node-> next= temp->next;
                    node->prev = tempVar;

                    temp-> next = temp->prev;
                    temp->prev = NULL;

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
   if( ((DATA*)node->dataPtr)->iValue >   ((DATA*)temp->dataPtr)->iValue)
    {
       sortedNode = temp;
    }
    else
        {sortedNode = node;}
        return sortedNode;

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
