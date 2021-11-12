#include "main.h"
#include <stdio.h>
/**
 * dec_to_bin - converts decimal number to binary
 * @lis: argument list
 *
 * Return: binary conversion of number
 */
int dec_to_bin(va_list lis)
{
	int n;

	n = va_arg(lis, int);
	return (print_bin(n));

}
/**
 * print_bin - prints the number in binary
 * @n: decimal num
 *
 * Return: length of binary num
 */
int print_bin(int n)
{
	int len = 0;

	if (n < 0)
	{
		len++;
		_putchar('0');
		n = -n;
	}
	if (n / 2 != 0)
		len += print_bin(n / 2);
	_putchar(n % 2 + '0');
	len++;
	return (len);
}
