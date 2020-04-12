/* CS1037a 2019 */
/* Assignment 03 */
/* Hamza Shaikh */
/* 251 041 178 */
/* Hshaik24 */
/* October 28, 2019 */
#include "header.h"


int main()
{
    int Array1[] = {23,43,65,27,12,7,34,76,28,64,79,83,2,55,66}; //Given Array
    aSize = (int)((sizeof(Array1))/(sizeof(Array1[0]))); //Computes size of the given array by dividing the size(bytes) of the array by the size of one element in the array(bytes)
    int Array2[aSize]; //declares a a second working array with the same length of the given array

    printf("\n\n This Assignement Three written by: Hamza Shaikh\n\n");
    printf("    Length of the Array is: %d elements\n\n", aSize);

    copyArray(Array1,Array2); //This function(found in Utilities) copies values from the given array to the second working array
    selectionSort(Array2); //This function(header file) will sort an array using selection sort
    printArray(Array1,Array2,projectTitle); //This function will print the project title, the original array, and the sorted array

    copyArray(Array1,Array2);//This function(found in Utilities) copies values from the given array to the second working array
    insertionSort(Array2);//This function(header file) will sort an array using insertion sort
    printArray(Array1,Array2,projectTitle); //This function will print the project title, the original array, and the sorted array

    copyArray(Array1,Array2);//This function(found in Utilities) copies values from the given array to the second working array
    bubbleSort(Array2);//This function(header file) will sort an array using bubble sort
    printArray(Array1,Array2,projectTitle); //This function will print the project title, the original array, and the sorted array
    return 0;
}
