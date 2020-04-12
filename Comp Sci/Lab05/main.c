#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c;   // 1 byte
    char *cp;  // a pointer of type char 4 bytes

    cp = &c;  // cp is assigned the ADDRESS of c
    *cp = 37; // in the location stored in cp

    printf("address of c is %d\n",cp);
    printf("address of cp is %d\n",&cp);
    printf("contents of cp is %d\n",cp);
    printf("c = %d and *cp = %d and cp = %p (in Hex) and cp = %d (in Decimal) to %d\n", c, *cp, cp, cp, cp + sizeof(cp));
    c = 99;
    printf("c = %d and *cp = %d and cp = %p (in Hex) and cp = %d (in Decimal) to %d\n\n", c, *cp, cp, cp, cp + sizeof(cp));

    char ca[3];
    char *cap;      // 3 x 1 byte  – 4 bytes
    cap = &(ca[0]);
    *(cap+2) = 102;

    printf("ca[0] = %c (%d) ( at address %d )\n", ca[0], ca[0], cap);
    printf("ca[1] = %c (%d) ( at address %d )\n", ca[1], ca[1], &ca[1]);
    printf("ca[2] = %c (%d) ( at address %d )\n", ca[2], ca[2], &ca[2]);
    printf("ca[0] = %d and *cap = %d and cap = %p (in Hex) and cap = %d (in Decimal) to %d\n\n", ca[0], *cap, cap, cap, cap + sizeof(cap));


    int ia[5];
    int *iap;
    iap = &(ia[0]);
    *(iap+2) = 102;

    printf("ia[0] = %d ( at address %d )\n", ia[0], iap);
    printf("ia[1] = %d ( at address %d )\n", ia[1], &ia[1]);
    printf("ia[2] = %d ( at address %d )\n", ia[2], &ia[2]);
    printf("ia[0] = %d and *iap = %d and iap = %p (in Hex) and iap = %d (in Decimal) to %d\n\n", ia[0], *iap, iap, iap, iap + sizeof(ia[0]));

    double db;      /* 8 bytes */
    double *pdb;    /* 4 bytes */
    void *pV ;      /* 4 bytes */

    pdb = &db;
    *pdb = 3.7;
    printf("db = %lf and ADDRESS of db  = %p (in Hex) and ADDRESS of db = %d (in Decimal) to %d\n\n",db, &db, pdb, pdb + sizeof(db));

    //Assigning address of character
    pV = &c;
    //dereferencing void pointer with character typecasting
    printf("c = %c\n\n",*((char*)pV));

    //Re-assigning void pointer to address of double
    pV = &db;

   //dereferencing void pointer with integer typecasting
    printf("db = %lf\n\n",*((double*)pV));

    return 0;
}
