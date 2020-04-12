#include <stdio.h>
#include <stdlib.h>

//selection sort
int main()
{
    int Array2[]={9,38,45,6,8,5,67,8,34};
    int Array3[]={9,38,45,6,8,5,67,8,34};
    int aSize = sizeof(Array2)/sizeof(Array2[0]);

    printf("Size of Array: %d \n\n",aSize);

    printf("Array values are are : \n");

    for(int i=0;i<aSize; i++)
    {
        printf("%d ",Array2[i]);
    }
    printf("\n\n");

    //sort arrays
    for(int i=0;i<aSize; i++)
    {
        int min=i;
        for(int j=i+1;j<aSize;j++)
        {
            if(Array2[j]<Array2[min])
            {
                min = j;
            }
        }
        if(min != i)
        {
            int temp;
            temp = Array2[min];
            Array2[min]=Array2[i];
            Array2[i]=temp;
        }
    }

    //print arrays
    for(int i=0;i<aSize; i++)
    {
        printf("%d ",Array2[i]);
    }

    printf("\n\nThe values of the third Array are: \n");
    for(int i=0;i<aSize; i++)
    {
        printf("%d ",Array3[i]);
    }
    //insertion Sort

    int holePosition;
    int valuetoInsert;

    for(int i=0; i<aSize; i++)
    {
        valuetoInsert = Array3[i];
        holePosition = i;

        while(holePosition>0 && Array3[holePosition-1]>valuetoInsert)
        {
            Array3[holePosition] = Array3[holePosition-1];
            holePosition--;
        }

        Array3[holePosition] = valuetoInsert;
    }

    printf("\n\nThe values of the third Array insertion sorted are: \n");
    for(int i=0;i<aSize; i++)
    {
        printf("%d ",Array3[i]);
    }
    return 0;
}

/*if(Array2[i]<Array2[0])
        {
            int temp; // creates a temporary variable to hold the original value of firstA
            temp = Array2[0]; // assigns firstA value to temp so we can swap values later on
            Array2[0] = Array2[i]; //assigns secondB to firstA this is why we needed temp value because otherwise would have lost the original value of firstA
            Array2[i] = temp;
        }
*/
