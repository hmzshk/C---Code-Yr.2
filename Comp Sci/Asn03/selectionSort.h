/* CS1037a 2019 */
/* Assignment 03 */
/* Hamza Shaikh */
/* 251 041 178 */
/* Hshaik24 */
/* October 28, 2019 */

#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED

selectionSort(int Array2[])
{
    for(int i=0;i<aSize; i++)
    {
        int min=i; //initializes a variable min which will hold the minimum value of the unsorted array
        for(int j=i+1;j<aSize;j++)
        {
            if(Array2[j]<Array2[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            swapValues(Array2[min],Array2[i]);
           int temp;
            temp = Array2[min];
            Array2[min]=Array2[i];
            Array2[i]=temp;

        }
    }
}
#endif // SELECTIONSORT_H_INCLUDED
