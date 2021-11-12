#ifndef MAIN_H

#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/**
 * struct formatOp - Struct for format specifications in _printf
 * @a: format specification char
 * @f: Corresponding function for format
 *
 * Description: Used in our _printf function for formatting arguments
 */
typedef struct formatOp
{
	char *a;
	int (*f)(va_list);
} formatOp;
int _putchar(char c);
int _strlen(char *);
int _putchar(char c);
int _printf(const char *format, ...);
int buf_int(va_list);
int buf_dec(va_list);
int buf_chr(va_list);
int buf_str(va_list);
int buf_Uint(va_list list);
int conv_decimal(int);
int rot_13(va_list);
int dec_to_bin(va_list);
int print_rev(va_list list);
int print_bin(int n);
int dec_to_hex(va_list);
int print_hex(int n);
int dec_to_Hex(va_list);
int print_Hex(int n);
formatOp options(int);
#endif
