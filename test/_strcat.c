/**
 * *_strcat - concatenates two strings.
 * @dest: string destination
 * @src: string to be concatendatd
 *
 * Return: concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int pos, pos2;

	/*averigua el size de dest */
	for (pos = 0; dest[pos] != 0; pos++)
	{
	}
	/* recorre el string a copiar */
	for (pos2 = 0; src[pos2] != 0; pos2++)
	{
		/* desde el final de dest, agrega src */
		*(dest + pos + pos2) = *(src + pos2);
	}
	/* agrega el null al final del nuevo string */
	*(dest + pos + pos2) = 0;
	return (dest);
}
