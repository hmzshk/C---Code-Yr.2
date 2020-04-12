#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED


NODE* sorter( NODE *startNode )
{
    NODE *p, *q, *top;
    int changed = 1;

    /*
    * We need an extra item at the top of the list just to help
    * with assigning switched data to the 'next' of a previous item.
    * It (top) gets deleted after the data is sorted.
    */

    if( (top = (NODE *)malloc(sizeof(NODE))) == NULL) {
        fprintf( stderr, "Memory Allocation error.\n" );
        // In Windows, replace following with a return statement.
        exit(1);
    }

    top->next = startNode;
    if( startNode != NULL && startNode->next != NULL ) {
        /*
        * This is a survival technique with the variable changed.
        *
        * Variable q is always one item behind p. We need q, so
        * that we can make the assignment q->next = list_switch( ... ).
        */

        while( changed ) {
            changed = 0;
            q = top;
            p = top->next;
            while( p->next != NULL ) {
                /* push bigger items down */
                if( (((DATA*)p->dataPtr)->iValue) > (((DATA*)p->next->dataPtr)->iValue) ) {
                    p->next = p->next->next;
                    p->next->next = p;
                    q->next = p->next;
                    changed = 1;
                }
                q = p;
                if( p->next != NULL )
                    p = p->next;
            }
        }
    }
    p = top->next;
    free( top );
    return p;
}


#endif // SORT_H_INCLUDED
