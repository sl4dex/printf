#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

conversion conv[] =
{
	{ "%" , _putsPerc},
	{ "c" , _puts_chr},
	{ "s" , _puts_str},
	{ NULL, NULL}
};

/**
* _printf - produces output according to a format
* @format: character string. The format string is composed of zero or more directives
* Return:  the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
*/
int _printf(const char *format, ...)
{
	va_list list;
	int i, k;
	char *final;
	char *copy;

	final = "";
	copy = "";
	i = 0;
	va_start(list, format);
	
	
	/* checks if format has rogue %'s 
	while (format && format[i])
	{
		
		if (format[i] == '%')
		{
			if (format[i + 1] != '%' || format[i + 1] != 'c' ||
				format[i + 1] != 's' )
			{
				_puts("Error: wrong conversion specifier");
				exit(98);
			}
		}
		i++;
	}
	i = 0; */
	/* while format string and format current position != 0 */
	while (format && format[i])
	{
		/*
		if (format[i] == '%')
		{
			i++;
			while (conv[j].a[0] != 0)
			{
				*//* if current format position equals struct option 
				if (format[i] == conv[j].a[0])
				{
					conv[j].f(list);
				}
				else
					j++;
			}
		}
		 else is not % */
			*copy = format[i];
			*final = str_concat(final, copy);
			i++;
	}

	for (k = 0; final[k] != 0; k++)
	{
		_putchar(final[k]);
	}
	return(0);
}
void _putsPerc(va_list list)
{
	/* chg */
	_putchar(va_arg(list, int));
}
void _puts_chr(va_list list)
{
	_putchar(va_arg(list, int));
}
void _puts_str(va_list list)
{
	_puts(va_arg(list, char *));
}
