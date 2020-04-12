/* CS1037a 2019 */
/* Assignment 03 */
/* Hamza Shaikh */
/* 251 041 178 */
/* Hshaik24 */
/* October 28, 2019 */

#ifndef UTILITIES_H_INCLUDED
#define UTILITIES_H_INCLUDED

void swapValues(int firstA, int secondB)
{
    int temp; // creates a temporary variable to hold the original value of firstA
    temp = firstA; // assigns firstA value to temp so we can swap values later on
    firstA = secondB; //assigns secondB to firstA this is why we needed temp value because otherwise would have lost the original value of firstA
    secondB = temp; //Assigns the original value of firstA that was stored in temp to secondB

}
void copyArray(int Array1[], int Array2[])
{
    for(int i=0;i<aSize;i++)
    {
        Array2[i]=Array1[i];
    }
}

void printArray(int Array1[],int  Array2[],char projectTitle[])
{
    static int i=1;  // Initializes a static variable i, used for the project number.
    printf("\n%s %d: ",projectTitle,i);
    printf("\nThe Contents of the Array are : \n");
    for(int i=0;i<aSize;i++)
    {
        printf("%d ",Array1[i]);
    }
    printf("\n\n");
    for(int i=0;i<aSize;i++)
    {
        printf("%d ",Array2[i]);
    }
    printf("\n");
    i++;

}
#endif // UTILITIES_H_INCLUDED
