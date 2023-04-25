#include "main.h"
#include <stdlib.h>
/**
 * _printf -> printing
 * @format: char const
 * @...: arguments
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list list;
	int count = 0;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	cases(format, list);
	return (count);
}
