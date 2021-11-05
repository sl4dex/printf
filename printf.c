#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - produces output according to a format
 * @format: character string. The format string is composed of zero or more directives
 * Return:  the number of characters printed (excluding the null byte used to end output to strings)
 * write output to stdout, the standard output stream
 */
conversion conv[]
{
	{ "%" , puts},
	{ "c" , puts_chr},
	{ "s" , puts_str},
	{ NULL, NULL}
};

int _printf(const char *format, ...)
{
va_list list;
int i = 0, j;
va_start(list, format);
while (format && format[i])
{
	if (format[i] == "%")
	{
		if (format[i + 1] && format[i + 1] == "%")
		{
		conv[0].f;
		} else if (format[i + 1] && format[i + 1] == "c")
		{
			conv[1].f;
		} else if (format[i + 1] && format[i + 1] == "s")
                {
                        conv[2].f;
                } else
		{
			
		}
	}
}
}
char *_puts(void)
{
_putchar('%');
}
char *_puts_chr(void)
{
_putchar(va_arg(list, int));
}
char *_puts_str(void)
{
_putchar(va_arg(list, char *));
}
