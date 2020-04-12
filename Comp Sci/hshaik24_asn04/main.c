/* CS1037a 2019 */
/* Assignment 04 */
/* Hamza Shaikh */
/* 251-041-178*/
/* Hshaikh24 */
/* novemeber 18, 2019 */

#include <stdio.h>
#include <stdlib.h>
#include "headers.h"


int main()
{
    createNlist(aSize); //calls function to create a linked list
    printf("The Node List is: \n");
    displayList(headNode); //calls function to print the linked list

    printf("\nLinked List after Bubble Sort:\n");
    bubbleSort(headNode); //calls function to bubble sort the linked list
    displayList(headNode); //calls function to print the linked list
    return 0;
}
//The display list function is passed the first node and using a for loop traverses the list to and prints out the value stored in dataNum.
void displayList(startNode)//empty
{
    NODE *temp; //temporary pointer that will hold the first node in the list

    temp = startNode;//headNode
    for(int i=1;i<=aSize;i++)
    {
        printf("Node %d is: %d\n", i, temp->dataNum);
        temp = temp->link;
    }
}
