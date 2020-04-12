#ifndef INSERTLINK_H_INCLUDED
#define INSERTLINK_H_INCLUDED

void insertnode(void**, NODE*, int*);

void insertnode (void** topnode, NODE* newnode, int* nodetotal) {

    NODE* temphead = (NODE*)*topnode;
    NODE* addnode = newnode;

    for(int counter = 0; counter < (*nodetotal) + 1; counter++) {

        if (((DTA*)temphead->dataptr)->value > ((DTA*)addnode->dataptr)->value) {

            NODE* slot;

            slot = temphead->prev;
            addnode->next = temphead;
            temphead->prev = addnode;

                if (counter==0) {
                    addnode->prev = NULL;
                    *topnode = addnode;
                    counter = (*nodetotal);
                }

                else {
                    addnode->prev = slot;
                    addnode->prev->next = addnode;
                    counter = (*nodetotal);
                }
        }
        else  if (counter==((*nodetotal)))
            {
                temphead->next = addnode;
                addnode->prev = temphead;
                addnode->next = NULL;
                counter = (*nodetotal);
            }

        temphead = temphead->next;
    }

    (*nodetotal)++;

}

void insertlinks (void** topnode, int* nodetotal) {

    int asize;

    printf("\nEnter how many new nodes: ");
    scanf("%d", &asize);

    for (int i = 0; i<asize; i++) {
        NODE* node;
        DTA* data;

        int random_number = rand() % 100 + 1;
        data = (DTA*)malloc(sizeof(NODE));
        data->pos = (*nodetotal) + 1;
        data->value = random_number;
        node = createnode(data);
        insertnode(topnode, node, nodetotal);
    }
}

#endif // INSERTLINK_H_INCLUDED
