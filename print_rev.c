#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @list: argument list
 *
 * Return: size of reversed string
 */
int print_rev(va_list list)
{
	int i, j;
	char *str = va_arg(list, char *);

	if (!str)
		return (-1);
	for (i = 0; str[i] != 0; i++)
	{
	}
	for (j = i - 1; j >= 0; j--)
		_putchar(*(str + j));
	return (_strlen(str));
}
