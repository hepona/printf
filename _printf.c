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
	int i;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0' ; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			switch (format[i + 1])
			{
				case '%':
					_putchar('%');
					i++;
					break;
				case 'c':
					print_chara(list);
					i++;
					break;
				case 's':
					print_string(list);
					i++;
					break;
				default:
					va_end(list);
					return (-1);
			}
		}
	}
	va_end(list);
	return (i);
}
