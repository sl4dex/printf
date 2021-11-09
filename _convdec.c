#include "main.h"
/**
 * conv_decimal - adds string to buffer
 * @i: argument list
 *
 * Return: length of buffer
 */
int conv_decimal(int i)
{
	unsigned int aux_i;
	int len = 0;

	if (i < 0)
	{
		_putchar('-');
		aux_i = -i;
		len++;
	} else
		aux_i = i;
	if (aux_i / 10)
	{
		len += conv_decimal(aux_i / 10);
	}
	_putchar((aux_i % 10) + '0');
	len++;
	return (len);
}
