#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main()
{
    char c = 'a';
    char *s = "Hello, world!";
    char *n = NULL;

    _printf("Printing a character: %c\n", c);
    _printf("Printing a string: %s\n", s);
    _printf("Printing a percent sign: %%\n");
    _printf("diez : \"\n");
    printf("diez : \"\n");
    _printf("Printing a character: %c%s%c\n", c , s, c);
    printf("%c%s",c ,n);
    _printf("%c%s",c ,n);



    return 0;
}
