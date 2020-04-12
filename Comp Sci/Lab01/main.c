/* CS1037a 2019 */
/* Lab 01 */
/* Prof Magguilli (Hamza Shaikh) */
/*September 10, 2019 */

#include <stdio.h>      /* printf and scanf definitions found here */
#define MILES_PER_KMS 0.6214  /* conversion constant */

int main(void)
{
    double miles;     /* distance in miles */
    double kms;       /* distance in kilometers */
    int speed;        /* speed in kilometers per hour */
    double duration;  /* amount of time traveling (in hours) */
    double distance;  /* distance traveled */

    /* get the distance in miles */
    printf("Enter the distance in kilometers > ");
    scanf("%lf", &kms);
    /* convert the distance to kilometers */
    miles = MILES_PER_KMS *kms;
    printf("%lf kilometers is equal to %lf miles\n\n", kms, miles);

    printf("Enter the speed in KPH > ");
    scanf("%d", &speed);

    printf("Enter the duration in hours > ");
    scanf("%lf", &duration);

    distance = speed * duration;
    printf("Distance traveled is %lf kilometers\n"
           "(%lf miles at %lf MPH)\n", distance,
           distance * MILES_PER_KMS, (distance * MILES_PER_KMS)/duration );
    return 0;
}
