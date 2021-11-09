#include "main.h"
/**
 * buf_dec - adds string to buffer
 * @list: argument list
 *
 * Return: length of buffer
 */
int buf_dec(va_list list)
{
return (conv_decimal(va_arg(list, int)));
}
