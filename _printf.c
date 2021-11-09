#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
* _printf - produces output according to a format
* @format: character string. The format string is composed of
* zero or more directives
* Return:  the number of characters printed
* (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
*/
int _printf(const char *format, ...)
{
	int i, j = 0, len = 0;
	va_list list;
	
	if (format)
	{
		va_start(list, format);
		for (i = 0; format[i]; i++)
		{
			if (list == NULL || (format[i] == '%' && format[i + 1] == '\0'))
			return (-1);
			if (format[i] == '%')
			{
				if (format[i + 1] && format[i + 1] == '%')
				{
					len +=_putchar('%');
					i++;
					continue;
				}
				for (; format[i + 1] && j <= 1 && options(j).a[0]; j++)
				{
					if (options(j).a[0] == format[i + 1])
					{
						len += options(j).f(list);
						i++;
						break;
					}
				}
				j = 0;
			}
			else
			{
				len += _putchar(format[i]);
			}
		}
		return (len);
	} else
	{
		return (-1);
	}
}
/**
 * options - Selects format line
 * @pos: line from format to be returned
 *
 * Return: formatOp struct line
 */
formatOp options(int pos)
{
	formatOp fmt[] = {
		{"c", buf_chr},
		{"s", buf_str},
		{NULL, NULL}
	};
	return (fmt[pos]);
}
/**
 * buf_chr - adds char to buffer
 * @list: argument list
 * @buffer: buffer containing the text
 * @len: length of text in buffer
 *
 * Return: length of buffer
 */
int buf_chr(va_list list)
{
	return (_putchar(va_arg(list, int)));
}
/**
 * buf_str - adds string to buffer
 * @list: argument list
 * @buffer: buffer containing the text
 * @len: length of text in buffer
 *
 * Return: length of buffer
 */
int buf_str(va_list list)
{	
	char *str = va_arg(list, char *);
	if (str)
	{
	int i, len = 0;

	for (i = 0; i < _strlen(str); i++)
	{
		len += _putchar(str[i]);
	}
	return (len);
	}
	return (_printf("(null)"));
}
