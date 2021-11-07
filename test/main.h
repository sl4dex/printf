#ifndef MAIN_H

#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
typedef struct conversion
{
	char *a;
	void (*f)(va_list, char *, char *);
} conversion;
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _printf(const char *format, ...);
char _putchar(char c);
void _puts(char *str);
void _putsPerc(va_list, char *, char *);
void _puts_chr(va_list, char *, char *);
void _puts_str(va_list, char *, char *);
char *str_concat(char *s1, char *s2);
#endif
