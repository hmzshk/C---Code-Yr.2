#ifndef DEFINITIONS_H_INCLUDED
#define DEFINITIONS_H_INCLUDED


typedef struct dataStruct
{
    int iPos;
    int iValue;
}DATA;

typedef struct node
{
    void* dataPtr; //int dataNum stores the random Numbers generated for each Node
    struct node *next; //Links subsequent nodes together
    struct node *prev;
}NODE; //Just an alias for struct node so we don't have to type in struct node everytime

#endif // DEFINITIONS_H_INCLUDED
