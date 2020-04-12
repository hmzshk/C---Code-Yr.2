#include "utilities.h"

int main()
{
    void* vPointer;
    int iTotalLinks;

    createdoublelink(&vPointer, &iTotalLinks);

    printlink(vPointer, iTotalLinks);

    bubblesortdoublelink(&vPointer, &iTotalLinks);

    printlink(vPointer, iTotalLinks);

    insertlinks(&vPointer, &iTotalLinks);

    printlink(vPointer, iTotalLinks);

    releaselinks(vPointer);

    return 0;
}
