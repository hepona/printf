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
	int count = 0;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0' ; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			switch (format[i + 1])
			{
				case '%':
					_putchar('%');
					count++;
					i++;
					break;
				case 'c':
					print_chara(list);
					count++;
					i++;
					break;
				case 's':
					print_string(list);
					count++;
					i++;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					count = count + 2;
					i++;
					break;
			}
		}
	}
	va_end(list);
	return (count);
}
