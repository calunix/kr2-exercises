#include <stdio.h>

/* 
    Exercise 1-3
    Modify the temperature conversion program to print a heading above the
    table.
*/

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      /* lower limit of the temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("\nFahrenheit-Celsius Conversion Table\n\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("\n");
}