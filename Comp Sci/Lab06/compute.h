#ifndef COMPUTE_H_INCLUDED
#define COMPUTE_H_INCLUDED

float division(int numerator, int denominator, int *dividend, int *remainder)
{
    printf("address stored in dividend: %d\n", (int)dividend);
    printf("address stored in remainder: %d\n", (int)remainder);
    if (denominator < 1)
        return(-1);
    *dividend=numerator/denominator;
    *remainder=numerator%denominator;
    return( (float)numerator/ (float)denominator);
}

#endif // COMPUTE_H_INCLUDED
