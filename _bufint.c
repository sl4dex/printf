#include "main.h"
/**
 * buf_int - print integer to stdout
 * @list: argument list
 * Return: length of int
 */
int buf_int(va_list list)
{
return (conv_decimal(va_arg(list, int)));
}
