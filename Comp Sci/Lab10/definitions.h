#ifndef DEFINITIONS_H_INCLUDED
#define DEFINITIONS_H_INCLUDED

typedef struct dataStruct
{
    int iPos;
    int iValue;
}DTA;

typedef struct node
{
    void* dataPtr;
    struct node* next;
    struct node* prev;
}NODE;

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "nodeUtil.h"
#include "createLink.h"
#include "printLink.h"
#include "releaseLinks.h"

#endif // DEFINITIONS_H_INCLUDED
