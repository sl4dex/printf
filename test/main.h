#ifndef MAIN_H

#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
typedef struct conversion
{
	char *a;
	void (*f)(va_list lis);
} conversion;
int _printf(const char *format, ...);
char _putchar(char c);
void _puts(char *str);
void _putsPerc(va_list);
void _puts_chr(va_list);
void _puts_str(va_list);
char *str_concat(char *s1, char *s2);
#endif
