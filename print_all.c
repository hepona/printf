#include "main.h"
/**
 * print_string -> fct to print strings
 * @list: va list type
 */
void print_string(va_list list)
{
	int j = 0;
	int count = 0;
	char *str = va_arg(list, char*);

	if (str == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return;
	}
	while (str[j] != '\0')
	{
		_putchar(str[j]);
		count++;
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
