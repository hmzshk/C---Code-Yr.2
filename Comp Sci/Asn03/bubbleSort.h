/* CS1037a 2019 */
/* Assignment 03 */
/* Hamza Shaikh */
/* 251 041 178 */
/* Hshaik24 */
/* October 28, 2019 */

#ifndef BUBBLESORT_H_INCLUDED
#define BUBBLESORT_H_INCLUDED

bubbleSort(int Array2[])
{
    for(int i=0;i<aSize;i++)
    {
        for(int j=0;j<aSize;j++)
        {
            if(Array2[i]<Array2[j])
            {
                swapValues(Array2[i],Array2[j]);
                int temp;
                temp = Array2[i];
                Array2[i]=Array2[j];
                Array2[j]=temp;
            }
        }
    }
}

#endif // BUBBLESORT_H_INCLUDED
