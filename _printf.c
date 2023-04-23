#include "main.h"
#include <stdlib.h>
/**
 * _printf -> print everything
 * @format: string
 * ...: variable
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list list;
	char one_char;
	char *string;
	int i;
	int j = 0;

	va_start(list, format);
	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0' ; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			switch (format[i + 1])
			{
				case 'c':
					one_char = va_arg(list, int);
					_putchar(one_char);
					i++;
					break;
				case 's':
					string = va_arg(list, char*);
					while (string[j] != '\0')
					{
						_putchar(string[j]);
						j++;
					}
					i++;
					break;
				default:
					return (-1);
			}
		}
	}
	va_end(list);
	return (0);
}
