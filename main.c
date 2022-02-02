#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int dividend, divisor, remainder, GCD;

    printf("Please Enter Dividend and Divisor = ");
    scanf("%d%d",&dividend, &divisor);


    while(divisor!=0)
    {
        remainder=dividend%divisor;
        dividend=divisor;
        divisor=remainder;
    }
    GCD=dividend;

    printf("GCD Result is = %d",GCD);



    getch();
    return 0;
}
