#include <stddef.h>
#include <stdarg.h>
#ifndef MAIN_H
#define MAIN_H
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list list);
void print_chara(va_list list);
#endif
