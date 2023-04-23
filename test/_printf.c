#include "main.h"
#include <stdlib.h>
int _printf(const char *format, ...)
{   va_list list;
    int i; 

    va_start(list, format);
    if (format == NULL)
    {
            return (-1);
    }
    
    for (i = 0; format[i] != '\0' ; i++)
    {
        if (format[i] != '%'){
           _putchar(format[i]);
        }
        else
        {
            switch (format[i + 1])
            {
                case 'c':
			print_chara(list);
                    i++;
                    break;
		case 's':
		   print_string(list);
		  i++; 
                break;
            
            default:
                return (-1);
                break;
            }
        }   
    }
    va_end(list);

    return 0;
}


