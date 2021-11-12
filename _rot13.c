#include "main.h"
/**
 * rot_13 - rot13
 * @list: the list
 * Return: large of string
 */
int rot_13(va_list list)
{
	char *aux = va_arg(list, char *);
	int i;

	for (i = 0; aux[i]; i++)
	{
		if (aux[i] >= 65 && aux[i] <= 90)
		{
			if (aux[i] >= 65 && aux[i] <= 77)
			{
				_putchar(aux[i] + 13);
			}
			else
			{
				_putchar(aux[i] - 13);
			}
		}
		else if (aux[i] >= 97 && aux[i] <= 122)
		{
			if (aux[i] >= 97 && aux[i] <= 109)
			{
				_putchar(aux[i] + 13);
			}
			else
			{
				_putchar(aux[i] - 13);
			}
		}
		else
		_putchar(aux[i]);
	}
	return (i);
}
