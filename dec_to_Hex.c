#include "main.h"
#include <stdio.h>
/**
 * dec_to_Hex - converts decimal number to hexadecimal
 * @lis: argument list
 *
 * Return: hexadecimal representation of number
 */
int dec_to_Hex(va_list lis)
{
	int n;

	n = va_arg(lis, unsigned int);
	return (print_Hex(n));

}
/**
 * print_Hex - prints the number in uppercase hex
 * @n: decimal num
 *
 * Return: length of hex num
 */
int print_Hex(int n)
{
	int len = 0;

	if (n == 0)
	{
		_putchar('0');
		n = -n;
	}
	if (n / 16 != 0)
		len += print_Hex(n / 16);
	if (n % 16 < 10)
		_putchar(n % 16 + '0');
	else
		_putchar(n % 16 + 55);
	len++;
	return (len);
}
