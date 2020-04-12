#ifndef INSERTLINK_H_INCLUDED
#define INSERTLINK_H_INCLUDED
/*
void insertLinks(NODE *headNode, int numLinks)
{
    NODE *node;
    node = (NODE*) headNode;
    int random_number;
    srand(time(NULL));
    random_number = rand() % 100 + 1;
    int aSize;

    printf("\nEnter the number of new nodes: ");
    scanf("%d", &aSize);

    int iPosValu = numLinks;
    for ( int j = 0; j <aSize; j++)
    {
        int input = random_number;
        iPosValu = iPosValu+j+1;
        insertNode(node, input,iPosValu);
    }

}
 void insertNode( void *startNode, int data,int iPosValu)
    {

        NODE* newNode, *temp;

        temp = (NODE*) startNode;
        int i =1;
        int position = 2;
        for(int i=0;temp!=NULL;temp->next,i++)
        {
            if( ((DATA*)temp->dataPtr)->iValue < data < ((DATA*)temp->next->dataPtr)->iValue )
            {
                if(temp->prev!=NULL || temp->next!=NULL)
                {
                    position = i;
                }
                else if(temp->prev==NULL)
                {
                    if()
                }
            }
        }
        while(i<position-1 && temp!=NULL)
        {
            temp = temp->next;
            i++;
        }
    /*
        if(position == 1)
        {
            insertAtBeginning(data);
        }
        else if(temp == numLinks)
        {
            insertAtEnd(data);
        }
        */

        if(temp!=NULL)
        {
            newNode = (NODE*)malloc(sizeof(NODE));
            ((DATA*)newNode->dataPtr)->iValue = data;
            ((DATA*)newNode->dataPtr)->iPos = iPosValu;
            newNode->next = temp->next; // Connect new node with n+1th node
            newNode->prev = temp;          // Connect new node with n-1th node

            if(temp->next != NULL)
            {
                /* Connect n+1th node with new node */
                temp->next->prev = newNode;
            }
            /* Connect n-1th node with new node */
            temp->next = newNode;

            printf("NODE INSERTED SUCCESSFULLY AT %d POSITION\n", position);
        }

    }


/*void insertAtEnd(int data,void *startNode, void *lastNode)
{
    NODE * newNode,*node;
    node = (NODE*) startNode;


    if(last == NULL)
    {
        printf("Error, List is empty!\n");
    }
    else
    {
        newNode = (NODE *)malloc(sizeof(NODE));

        newNode->dataPtr->iValue = data;
        newNode->next = NULL;
        newNode->prev = last;

        last->next = newNode;
        last = newNode;

        printf("NODE INSERTED SUCCESSFULLY AT THE END OF LIST\n");
    }
}
*/

#endif // INSERTLINK_H_INCLUDED
