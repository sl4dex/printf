#include "main.h"
/**
 * buf_Uint - print unsigned integer to stdout
 * @list: argument list
 * Return: length of int
 */
int buf_Uint(va_list list)
{
return (conv_decimal(va_arg(list, unsigned int)));
}
