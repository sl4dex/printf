#include "main.h"
#include <stdio.h>
/**
 * dec_to_oct - converts decimal number to octal
 * @lis: argument list
 *
 * Return: octal conversion of number
 */
int dec_to_oct(va_list lis)
{
	int n;

	n = va_arg(lis, int);
	return (print_oct(n));

}
/**
 * print_oct - prints the number in octal
 * @n: decimal num
 *
 * Return: length of octal num
 */
int print_oct(int n)
{
	int len = 0;

	if (n == 0)
	{
		len++;
		_putchar('0');
		n = -n;
	}
	if (n / 8 != 0)
		len += print_oct(n / 8);
	_putchar(n % 8 + '0');
	len++;
	return (len);
}
