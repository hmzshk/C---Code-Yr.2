#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

void bubblesortdoublelink (void** topnode, int* nodetotal)
{

    NODE* node1 = (NODE*)*topnode;
    NODE* node2 = ((NODE*)*topnode)->next;

    for (int i = 0; i < (*nodetotal); i++) {

        for (int j = 0; j < (*nodetotal) - 1; j++) {

            if (((DTA*)node1->dataPtr)->iValue > ((DTA*)node2->dataPtr)->iValue)
            {

                if((node1->prev != NULL) && (node2->next != NULL)) {

                node1->next = node2->next;
                node2->prev = node1->prev;
                node2->next->prev = node1;
                node1->prev->next = node2;
                node1->prev = node2;
                node2->next = node1;
            }

            else if (node1->prev == NULL)
            {
                node1->next = node2->next;
                node2->prev = NULL;
                node2->next->prev = node1;
                node1->prev = node2;
                node2->next = node1;
                *vPointer = node2;
            }

            else if (node2->next == NULL)
            {
                node1->next = NULL;
                node2->prev = node1->prev;
                node1->prev->next = node2;
                node1->prev = node2;
                node2->next = node1;
            }

        }

        node1 = node2;
        node2 = node2->next;

        }

    node1 = (NODE*)*topnode;
    node2 = ((NODE*)*topnode)->next;

    }
}

#endif // FUNCTIONS_H_INCLUDED
