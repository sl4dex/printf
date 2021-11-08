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
	char buffer[1024];
	va_list list;

	va_start(list, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] && format[i + 1] == '%')
			{
				buffer[len] = format[i];
				len++;
				i++;
				continue;
			}
				for (; format[i + 1] && j <= 1 && options(j).a[0]; j++)
				{
					if (options(j).a[0] == format[i + 1])
					{
						len = options(j).f(list, &buffer[len], len);
						i++;
						break;
					}
				}
				j = 0;
		}
		else
		{
			buffer[len] = format[i];
			len++;
		}
	}
	write(1, buffer, len);
	return (len);
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
int buf_chr(va_list list, char *buffer, int len)
{
	*buffer = va_arg(list, int);
	len++;
	return (len);
}
/**
 * buf_str - adds string to buffer
 * @list: argument list
 * @buffer: buffer containing the text
 * @len: length of text in buffer
 *
 * Return: length of buffer
 */
int buf_str(va_list list, char *buffer, int len)
{
	int i;
	char *str = va_arg(list, char *);

	for (i = 0; i < _strlen(str); i++)
	{
		buffer[i] = str[i];
		len++;
	}
	return (len);
}
