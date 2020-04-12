/* CS1037a 2019 */
/* Assignment 02 */
/* Hamza Shaikh */
/* 251 041 178 */
/* hshaik24 */
/* Oct. 8, 2019 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[] = {23,43,65,23,12,7,34,76,28,64,1,25,89,1064,420,48};  // initializes array and also populates it.
    int lengthArray = (sizeof(array)/4);  // calculates the number of elements in the array by dividing the size of the array by 4 and assigns it to lengthArray
    int lowestVal = array[0]; //used to help find the lowest value in the array for project 3
    int position;   //used to in project 3 to hold the position number of the smallest number in the array
    int sum = 0;  //used in project 4 for the sum of all elements in the array
    int array2[lengthArray];  // 2nd array used in project 5 to store the array in reverse order
    int z = lengthArray-1; //z is length of array -1 because when printing/populating the array in reverse order a value not part of the array shows up used in project 5

    printf("size of Array: %d bytes\n", sizeof(array)); // prints the size of the array in bytes
    printf("Length of the Array is: %d elements\n\n\n", (sizeof(array)/4));  //prints the number of elements of the array by dividing the number of bytes by 4

    printf("Project 1:\n");    //prints title of project
    printf("The values stored in the array are: \n"); //prints the statement
    for(int i=0;i<lengthArray;i++)    // for loop that goes through each element of the array and prints them followed by 5 spaces.
    {
        printf("%d     ", array[i]);
    }

    printf("\n\nProject 2:\n");    //prints title of project
    printf("The values stored in the array in reverse order are: \n"); //prints the statement
    for(int i=(lengthArray-1);i>=0;i--)    // for loop that goes through each element of the array and prints them followed by 5 spaces.
    {
        printf("%d     ", array[i]);
    }

    printf("\n\nProject 3:\n");    //prints title of project
    for(int i=0;i<lengthArray;i++)    // for loop that goes through each element of the array and finds the lowest value
    {
        if(array[i]<lowestVal)
        {
            lowestVal = array[i];
            position = i;           // saves the position of the lowest value
        }

    }
    printf("Finds The smallest value stored in the array is:\n %d, it is in the %dth position from the left\n", lowestVal,position); //prints the statement

    printf("\nProject 4:\n"); // this project finds the sum of all elements in the array.
    printf("The values stored in the array are: \n"); //prints the statement
    for(int i=0;i<lengthArray;i++)    // for loop that goes through each element of the array and adds them to the variable sum
    {
        sum += array[i];
    }
    printf("%d", array[0]);
    for(int i=1;i<lengthArray;i++)    // for loop that goes through each element of the array and prints them with a plus sign spaces.
    {
        printf(" + %d", array[i]);
    }
    printf(" = %d", sum); // prints the calculated sum

    printf("\n\nProject 5:\n");    //prints title of project
    printf("The values stored in the original array are: \n"); //prints the statement
    for(int i=0;i<lengthArray;i++)    // for loop that goes through each element of the array and prints them followed by 5 spaces.
    {
        printf("%d     ", array[i]);
    }
    for(int i=0;i<lengthArray;i++)
    {
        int y = z--; // z starts from the last index of the array and decrements going from the end to the beginning of the array
        array2[i] = array[y];
    }
    printf("\nThe values stored in the second array are: \n"); //prints the statement
    for(int i=0;i<lengthArray;i++)    // for loop that goes through each element of the array and prints them followed by 5 spaces.
    {
        printf("%d     ", array2[i]);
    }

    printf("\n\n\nProject 6:\n"); //prints the array but with the first and last elements swapped.
    int firstEl = array[0];  //first element in the array
    int lastEl = array[lengthArray-1];  //last element in the array
    array[0] = lastEl; //assigns the last element to the first position in the array
    array[lengthArray-1] = firstEl; //assigns the first element to the last position in the array

    printf("The values of the array with the first and last elements swapped: \n"); //prints the statement
    for(int i=0;i<lengthArray;i++)    // for loop that goes through each element of the array and prints them followed by 5 spaces.
    {
        printf("%d     ", array[i]);
    }

    printf("\n\n\nProject 7:\n");// this project will print all the elements in the array in an ascending order from lowest to highest.
    printf("The values stored in the original array are: \n"); //prints the statement


    for(int i=0;i<lengthArray;i++)    // for loop that goes through each element of the array and prints them followed by 5 spaces.
    {
        printf("%d     ", array[i]);
    }

    //Ascending order using bubble sort method, start with 1st element and compare all the rest of the elements
    // in the array to see if any are smaller if they are than switch places, does this for all elements in the array.
    for(int i=0;i<lengthArray;i++)
    {
        for(int j=0;j<lengthArray;j++)
        {
            if(array[i]<array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    printf("\nThe values of the array in ascending order:\n");
    for(int i=0;i<lengthArray;i++)    // for loop that goes through each element of the array and prints them followed by 5 spaces.
    {
        printf("%d     ", array[i]);
    }

    return 0;
}
