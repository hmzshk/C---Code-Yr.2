#ifndef BUBBLYSORT_H_INCLUDED
#define BUBBLYSORT_H_INCLUDED

void bubblySort(NODE *workNode)
{
    NODE *p, *q, *top;

    top->link = workNode;

    for(int step=0; step<aSize-1; step++)
    {
        q=top;
        p=top->link;
        for(int i=0; i<aSize-step-1; i++)
        {
            if(p->dataNum > p->link->dataNum)
            {
               q->link=swapValues(p,p->link);
            }
            q=p;
        }
        workNode=workNode->link;
    }
}
#endif // BUBBLESORT_H_INCLUDED


#endif // BUBBLYSORT_H_INCLUDED
