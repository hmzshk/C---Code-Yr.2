#ifndef PRINTLIST_H_INCLUDED
#define PRINTLIST_H_INCLUDED


void printLink(void *startNode, int iTotal)
{
    NODE* node;

    printf("Am I printing");
    node = (NODE*) startNode;

    printf("\nLinear print out of link list with %d nodes (elements)\n\n", iTotal);
    while(node!=NULL)
    {
        printf("Node: %d:   Value: %d\n", ((DATA*)node->dataPtr)->iPos,(((DATA*)node->dataPtr)->iValue)   );
        node = node->next;
    }
    printf("\n\n");
}



#endif // PRINTLIST_H_INCLUDED
