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
