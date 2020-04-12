#ifndef CREATENODE_H_INCLUDED
#define CREATENODE_H_INCLUDED

typedef struct node
{
    int dataNum; //int dataNum stores the random Numbers generated for each Node
    struct node *link; //Links subsequent nodes together
}NODE; //Just an alias for struct node so we don't have to type in struct node everytime

NODE *headNode; //Global pointer that points to the first node in the list

//Creates the first node in the linked list and then uses a for loop to create and link the rest of the nodes.
void createNlist(int numNodes)
{
    NODE *secondNode, *tempNode; //secondNode, and tempNode are used to create subsequent nodes in the for loop
    int random_number; //Random number that will be assigned to the data field in each node

    srand(time(NULL));
    random_number = rand() %100 +1;

    headNode = (NODE*)malloc(sizeof(NODE)); //Allocates memory for the structure

    headNode->dataNum = random_number; //assigns a random number to the data field in the node
    headNode->link = NULL; //You don't want to link it to the next node initially so you can maintain the node and call functions
    tempNode = headNode; //Uses tempNode instead to hold and link headNode with the rest of the nodes.

    for(int i=2;i<=aSize;i++)
    {
        random_number = rand() %100 +1;

        secondNode = (NODE*)malloc(sizeof(NODE)); //Allocates memory for the structure
        secondNode->dataNum = random_number; //assigns a random number to the data field in the node
        secondNode->link = NULL;

        tempNode->link = secondNode; //links the first node to the second node using the link pointer
        tempNode = tempNode->link;
    }
}

#endif // CREATENODE_H_INCLUDED
