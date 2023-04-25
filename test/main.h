#include <stddef.h>
#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H
#define S_NULL "(null)"
int _printf(const char *format, ...);
int _putchar(char c);
void print_string(va_list list);
void print_chara(va_list list);
#endif
