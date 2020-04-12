/* CS1037a 2019 */
/* Assignment 01 */
/* your Hamza Shaikh */
/* your 251 041 178 */
/* your hshaik24 */
/* September 16, 2019 */

#include <stdio.h>
#include <stdlib.h>

/* The following code displays the first 47 terms of the fibonacci sequence.
the code was constructed by using a for loop that loops 47 times. the output will always be the value
stored in the variable firstTerm*/

int main()
{
    int firstTerm=0;  //firstTerm initialized with value 0, also the term two terms prior to the term you are calculating
    int Second=1;     //Second (short for second term) is initialized with value 1 also the previous term when doing calculation
    int Third;        //the term
    int i;

    printf("Fibonacci Sequence: First 47 values in the series\n");
    printf("--------------------------------------\n");

    for(i = 0; i<47; i++)
    {
        Third = firstTerm + Second;
        printf("%d: %d\n",i, firstTerm);
        firstTerm = Second;
        Second = Third;
    }
    /* if you go past 47 terms some of your results will be negative for example the 48th value is: -1323752223*/





    /* Project 2 - Mr. Magguilli Retirement Fund calculates how much funding one of mr. magguilli's student will contribute broken down in terms of day-to-day
    and total funding up to specific date. The program uses a while loop and runs 28 iterations for the 28 days. */

    printf("\n\nMagguilli Retirement Fund Contributioons : 28 days in the series\n");
    printf("----------------------------------------------------------------\n");


    double currentFund = 0.01;    // current fund is the funding the student will provide on that day
    double runnTotal = 0;         // runnTotal is the running total of funding
    int j=1;                      // j is a random variable used in the while loop.

    while(j<29)
    {
        runnTotal = runnTotal + currentFund;
        printf("Day %d : current: %lf  - running total: %lf\n", j, currentFund, runnTotal);
        currentFund = currentFund *2;
        j++;
    }


    /* project 3 - Grade Converter */
    /* The following grade converter program converts number grades to letter grades. It uses cascading if-statements to sorts through which range
     the input(numGrade) belongs to and then prints the corresponding letter grade. */

    int numGrade = 73;      // numGrade is the numerical grade value
    printf("\n\nGrade conversion from numeric to letter grade : based on a grade of %d",numGrade);
    printf("\n------------------------------------------------------------------------\n");

    if(90<numGrade && numGrade<101)   // checks if the numGrade value is within the range
    {
        printf("A+");
    }
    else if(80<numGrade && numGrade<91)  // checks if the numGrade value is within the range
    {
        printf("A");
    }
    else if(70<numGrade && numGrade<81)  // checks if the numGrade value is within the range in this case it is and so it will go in and execute the printf command. and exit the loop structure.
    {
        printf("B");
    }
    else if(60<numGrade && numGrade<71)  // checks if the numGrade value is within the range
    {
        printf("C");
    }
    else if(50<numGrade && numGrade<61)  // checks if the numGrade value is within the range
    {
        printf("d");
    }
    else if(0<=numGrade && numGrade<51)// checks if the numGrade value is within the range
    {
        printf("FAIL");
    }
    else                               // if numGrade doesnt belong in any of the above this will execute.
    {
        printf("Out of Range");
    }

    /* I believe you cannot convert this into a switch() structure because you can only use a single integer for a case and not a range of values for case.

    /* Project 4 - Class Classifier */
    /* The Class classifier program converts number input to text description of what type of class it is(day/night/online). The program utilizes switch statements
    where similar to cascading if statements it will find the corresponding case and execute the command(in this case print) then it will break out of the loop. */

    int classType = 650;      // classType is the type of class denoted by a number (1,2,650)
    printf("\n\n\n\nClass Section Conversion from numeric to text description : based on a value of %d",classType);
    printf("\n---------------------------------------------------------------------------------------\n");



        switch (classType)  {
            case 1: printf("Day Class");
                break;
            case 2: printf("Night Class");
                break;
            case 650: printf("Online Class");
                break;
            default: printf("Illegal Section");
        }
    return 0;
}
