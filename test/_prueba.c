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
        int i = 0, j = 0, len = 0;
        char buffer[1024], c = 10;
        va_list list;

        va_start(list, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] && format[i + 1] == '%')
			{
				buffer[len] = format[i];
				len++;
				i += 2;
			} 
			else if (!format[i + 1])
				i++;
			else
			{
				while(format[i + 1] && conv[j].a[0])
                        	{
                                	if (conv[j].a[0] == format[i + 1])
                               	 	{	
                                        	len = conv[j].f(list, &buffer[len], len);
                                        	i += 2;
                                        	break;
                                	}
                                	else if (j == 1)
					{
                                        	i++;
						break;
					}
					else
 						j++;
                        	}
				j = 0;
			}

		}
		else
		{
			buffer[len] = format[i];
			i++;
			len++;
		}
	}
	write(1, buffer, len);
	write(1, &c, 1);
	return(0);
}
int _puts_chr(va_list list, char *buffer, int len)
{
       	*buffer = va_arg(list, int);
	len++;
	return (len);
}
int _puts_str(va_list list, char *buffer, int len)
{
	int i;
	char *str = va_arg(list, char *);
	for(i = 0; i < _strlen(str); i++)
	{
		buffer[i] = str[i];
		len++;
	}
	return (len);
}
