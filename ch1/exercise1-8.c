#include <stdio.h>

/*
	Exercise 1-8
	Write a program to count blanks, tabs, and newlines.
*/

main()
{
    int c, btnl;

    btnl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++btnl;
        if (c == '\t')
            ++btnl;
        if (c == '\n')
            ++btnl;
	}
    printf("%d\n", btnl);
}