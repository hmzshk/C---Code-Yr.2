#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct description
    {
        char name[10];
        int productID;
    };
    struct dollars
    {
        float retail;
        float wholesale;
    };

    typedef struct product
    {
        char category[20];
        struct description des;
        struct dollars dol;
    };

    struct product thing1;
    struct product *pProduct;

    strcpy(thing1.category,"Widget");
    strcpy(thing1.des.name,"Niblick");
    thing1.des.productID = 203773;
    thing1.dol.retail = 57.95;
    thing1.dol.wholesale = 23.50;

    pProduct = &(thing1);
    printf("Product Details as Entered\n\n");

    printf("Category: %s\nName: %s\nID Number: %d\nRetail Price: %0.2f\nWholesale Price: %0.2f\n", pProduct->category, pProduct->des.name,pProduct->des.productID, pProduct->dol.retail,pProduct->dol.wholesale);

    return 0;
}
