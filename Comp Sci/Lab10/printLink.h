#ifndef PRINTLINK_H_INCLUDED
#define PRINTLINK_H_INCLUDED

void printLink(void *startNode, int iTotal)
{
    NODE* node;

    node = (NODE*) startNode;

    printf("\nLinear print out of link list with %d nodes (elements)\n\n", iTotal);
    while(node!=NULL)
    {
        printf("Node: %d:   Value: %d\n", ((DTA*)node->dataPtr)->iPos,((DTA*)node->dataPtr)->iValue);
        node = node->next;
    }
    printf("\n\n");
}


#endif // PRINTLINK_H_INCLUDED
