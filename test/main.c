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

    _printf("Printing a character: %c\n", c);
    _printf("Printing a string: %s\n", s);
    _printf("Printing a percent sign: %%\n");

    return 0;
}

