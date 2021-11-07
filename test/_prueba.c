#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
conversion conv[] =
{
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
	int i = 0, j = 0;
	char *copy, *final;
	va_list list;
 
	va_start(list, format);
	copy = malloc(1);
	final = malloc(1024);		
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			copy[0] = format[i];
			final = str_concat(final, copy);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] && format[i + 1] == '%')
		{
				copy[0] = format[i];
				i += 2;
                		final = str_concat(final, copy);
		}
		else 
		{
				_puts("wtf\n");
			while(conv[j].a[0])
			{
				if (!conv[j].a[0])
				{
					_puts("Error");
					return (1);
				}	
				else if (format[i + 1] && conv[j].a[0] == format[i + 1])
				{
					conv[j].f(list, final, copy);
					break;
				}
				else		
					j++;
			}	
		}
	}	
	write(1, final, i);
	_putchar(10);
	return(0);
}
void _puts_chr(va_list list, char *final, char *copy)
{
       	copy[0] = va_arg(list, int);
        final = str_concat(final, copy);
}
void _puts_str(va_list list, char *final, char *copy)
{
	/* correfit */
        copy[0] = 'a';
        final = str_concat(final, va_arg(list, char *));
}
