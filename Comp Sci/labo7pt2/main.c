#include <stdio.h>
#include <stdlib.h>

//M X N X O matrix
#define Mindex 2
#define Nindex 3
#define Oindex 4

//Dynamically allocate memory for a 3D array
int main()
{
    int*** A = (int***)malloc(Mindex * sizeof(int**));

    if (A == NULL)
    {
        fprintf(stderr, "Out of memory");
        exit(0);
    }
    for (int i = 0; i<Mindex; i++)
    {
        A[i] = (int***)malloc(Nindex * sizeof(int*));

        if (A == NULL)
        {
            fprintf(stderr, "Out of memory");
            exit(0);
        }
        for (int j = 0; j<Nindex; j++)
        {
            A[i][j] = (int*)malloc(Oindex * sizeof(int));
            if (A[i][j] == NULL)
            {
                fprintf(stderr, "Out of memory");
                exit(0);
            }
        }
    }


    //Assign values to allocated memory
    for (int i = 0; i<Mindex; i++)
        for (int j = 0; j<Nindex; j++)
            for (int k = 0; k<Nindex; k++)
                A[i][j][k]=rand()%100;

    for (int i = 0; i<Mindex; i++)
    {
        for (int j = 0; j<Nindex; j++)
        {
            for (int k = 0; k<Nindex; k++)
            {
                printf("%d ", A[i][j][k]);
            }
            printf("\n");
        }
         printf("\n");
    }

    //De-Allocate memory
    for(int i=0; i<Mindex; i++)
    {
        for(int j=0; j<Nindex; j++)
        {
            free(A[i][j]);
        }
        free(A[i]);
    }
    free(A);
}
