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
	int i, j, len = 0;
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
				if (format[i + 1] == '%')
				{
					len += _putchar('%');
					i++;
					continue;
				}
				for (j = 0; format[i + 1] && options(j).a[0]; j++)
				{
					if (options(j).a[0] == format[i + 1])
					{
						len += options(j).f(list);
						i++;
						break;
					}
				}
				if (!options(j).a[0])
				len += _putchar(format[i]);
			}
			else
			{
				len += _putchar(format[i]);
			}
		}
		va_end(list);
		return (len);
	}
		return (-1);
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
		{"i", buf_int},
		{"d", buf_dec},
		{"R", rot_13},
		{"\0", NULL}
	};
	return (fmt[pos]);
}
/**
 * buf_chr - adds char to buffer
 * @list: argument list
 * Return: length of buffer
 */
int buf_chr(va_list list)
{
	return (_putchar(va_arg(list, int)));
}
/**
 * buf_str - adds string to buffer
 * @list: argument list
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
	else
	return (_printf("(null)"));
}
