#include <stdio.h>

/*
    Exercise 1-9
    Write a program to copy its input to its output, replacing each string of
    one or moe blanks by a single blank.
*/

main()
{
    int c, lcwb;    /* lcwb means last char was blank */
    lcwb = 0;       /* 0 = false, 1 = true */

    while((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c);
            lcwb = 0;
        }
        else if (c == ' ' && lcwb == 0) {
            putchar(c);
            lcwb = 1;
        }
    }
}