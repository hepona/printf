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
	int len, len1, len2, len_int;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("C%%%c\n", 'a');
	printf("C%%%c\n", 'a');
	len = _printf("Character:[%s]\n", "Him");
	len2 = printf("Character:[%s]\n", "Him");
	printf("String length: %d\nString length 2: %d\n", len, len2);
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I axm a string !");
	len1 = _printf("Len:[%]\n", len);
	len2 = _printf("Len:[%]\n", len2);
	len1 = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	len_int = printf("Len:[%d]\n", 10000);
	printf("Len:[%d]\n", len_int);
	printf("%d\n%d\n", len1, len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	_printf("Wrong: %c\n");
	printf("Wrong: %c\n");
	_printf("Null: %s\n", NULL);
	return (0);
}
