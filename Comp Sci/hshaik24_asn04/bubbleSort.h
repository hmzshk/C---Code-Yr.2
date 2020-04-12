#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED

/*uses bubbleSort algorithem to sort the linked list. The first node is passed into the function and is stored in the variable storeNode
Then the double for loop traverses the linked list and compares two subsequent nodes and sorts if needed. */
void bubbleSort(NODE *workNode)
{
    NODE *temp = NULL; //Temporary node used to swap data
    NODE *storeNode = workNode; //points to the first node(workNode aka headNode) in the list.
    int swap_data; //used to sore the integer from the nodes that will be swapped


    for(int step=0; step<aSize-1; step++)
    {
        temp = storeNode;
        for(int i=0; i<aSize-step-1; i++)
        {
            if(temp->dataNum > temp->link->dataNum)//swaps data if condition is met.
            {
                swap_data = temp->dataNum;
                temp->dataNum = temp->link->dataNum;
                temp->link->dataNum = swap_data;
            }
            temp = temp->link;
        }
        workNode=workNode->link;
    }
}
#endif // BUBBLESORT_H_INCLUDED
