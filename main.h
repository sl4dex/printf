#ifndef MAIN_H
#define MAIN_H
typedef struct conversion
{
	char *a;
	char *(*f)(char *);
} conversion;
int _printf(const char *format, ...);
char _putchar(char c);
void _puts(char *str);
#endif
