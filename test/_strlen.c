#include "main.h"

/**
 * _strlen - calculates the length of string s
 * @s: The string
 * Return: the length of string s
 */

int _strlen(char *s)
{
int a = 0;
int cont = 0;
while (*(s + a) != 0)
{
cont++;
a++;
}
return (cont);
}
