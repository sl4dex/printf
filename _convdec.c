#include "main.h"
/**
 * conv_decimal - adds string to buffer
 * @i: argument list
 *
 * Return: length of buffer
 */
int conv_decimal(int i)
{
	int len = 0;

	if (i < 0)
	{
		_putchar('-');
		len++;
		i = -i;
	}
	if (i / 10)
	{
		len += conv_decimal(i / 10);
	}
	_putchar((i % 10) + '0');
	len++;
	return (len);
}
