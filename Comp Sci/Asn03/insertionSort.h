/* CS1037a 2019 */
/* Assignment 03 */
/* Hamza Shaikh */
/* 251 041 178 */
/* Hshaik24 */
/* October 28, 2019 */

#ifndef INSERTIONSORT_H_INCLUDED
#define INSERTIONSORT_H_INCLUDED

void insertionSort(int Array2[])
{
    int holePosition; //Declares a variable that will hold the index of the empty position
    int valuetoInsert; //Declares the variable that will hold the value to be inserted in the hole position

    for(int i=0; i<aSize; i++)
    {
        valuetoInsert = Array2[i];
        holePosition = i;

        while(holePosition>0 && Array2[holePosition-1]>valuetoInsert)
        {
            Array2[holePosition] = Array2[holePosition-1];
            holePosition--;
        }

        Array2[holePosition] = valuetoInsert;
    }

}

#endif // INSERTIONSORT_H_INCLUDED
