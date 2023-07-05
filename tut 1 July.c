#include <stdio.h>
 /*
    A program that calculates the factorial of a given number
 */

int main()
{
    int num, counter = 1, factorial =1;

    printf("input any number");
    scanf("%d", &num );

    while (counter <= num)
    {
        factorial *= counter;

        counter +=1;

    }

    printf("The factorial of %d is %d", num, factorial);
}