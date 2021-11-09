#include "main.h"
/**
 * dec_to_bin - converts decimal number to binary
 * @lis: argument list
 *
 * Return: binary conversion of number
 */
int dec_to_bin(va_list lis)
{
	int bin[32];
	int i, j, dec;

	i = 0;
	dec = va_arg(lis, int);
	if (!dec)
		_putchar ('0');
	for (; dec > 0; i++)
	{
		bin[i] = dec % 2;
		dec /= 2;
	}
	i--;
	for (j = i; j >= 0; j--)
		_putchar(bin[j] + '0');
	return (++i);
}
