#include <stdio.h>

/*
    Exercise 1-4
    Write a prgram to print the corresponding Celsius to Fahrenheit table.
*/

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = -20;    /* lower limit of the temperature table */
    upper = 160;    /* upper limit */
    step = 20;      /* step size */

    printf("\nCelsius-Fahrenheit Conversion Table\n\n");

    celsius = lower;
    while (celsius <= upper) {
        fahr = ( (9 * celsius) / 5 ) + 32;
        printf("%3d\t%6d\n", celsius, fahr);
        celsius = celsius + step;
    }
    printf("\n");
}