#ifndef MAIN_H

#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * struct conversion - Struct for format specifications in _printf
 * @a: format specification char
 * @f: Corresponding function for format
 *
 * Description: Used in our _printf function for formatting arguments
 */
typedef struct formatOp
{
	char *a;
	int (*f)(va_list);
} formatOp;
int _putchar(char c);
int _strlen(char *);
int _putchar(char c);
int _printf(const char *format, ...);
int buf_chr(va_list);
int buf_str(va_list);
formatOp options(int);
#endif
