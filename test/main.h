#ifndef MAIN_H

#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
typedef struct conversion
{
	char *a;
	int (*f)(va_list, char *, int);
} conversion;
int _strlen(char *);
int _putchar(char c);
int _printf(const char *format, ...);
int _puts_chr(va_list, char *, int);
int _puts_str(va_list, char *, int);
#endif
