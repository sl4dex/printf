#include "main.h"
#include <stdio.h>
/**
 * dec_to_hex - converts decimal number to hexadecimal
 * @lis: argument list
 *
 * Return: hexadecimal representation of number
 */
int dec_to_hex(va_list lis)
{
	int n;

	n = va_arg(lis, unsigned int);
	return (print_hex(n));

}
/**
 * print_hex - prints the number in hex
 * @n: decimal num
 *
 * Return: length of hex num
 */
int print_hex(int n)
{
	int len = 0;

	if (n == 0)
	{
		len++;
		_putchar('0');
	}
	if (n / 16 != 0)
		len += print_hex(n / 16);
	if (n % 16 < 10)
		_putchar(n % 16 + '0');
	else
		_putchar(n % 16 + 87);
	len++;
	return (len);
}
