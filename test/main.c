#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char character = 'z';
    char *s = "totokko";
    printf("original printf chara: %c", character);
    printf("\n");
    printf("original printf string : %s\n", s);
/**************************************************/
   _printf("_printf character : %c\n", character);
    _printf("_printf string : %s\n", s);
    _printf("hello word ! bastard\n");
   
    return (0);
}
