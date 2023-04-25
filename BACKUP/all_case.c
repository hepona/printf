#include "main.h"
/**
 * cases -> all pritnf cases
 * @format: char
 * Return: count
 */
int cases(const char *format)
{
	int i;
	int count = 0;
	va_list list;

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
					count++;
					break;
			}
		}
	}
	return (count);
}
