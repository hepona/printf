#include "main.h"
/**
 * print_string -> fct to print strings
 * @list: va list type
 */
void print_string(va_list list)
{
	int j;
	char *str = va_arg(list, char*);

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
}
/**
 * print_chara -> fct to print characters
 * @list: va list type
 */
void print_chara(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
}
