#include "main.h"
#include <stdio.h>
int main(void)
{
	int len;
	len =_printf("cinco%o %o %o", 0, 1, 125);
	printf("len = %d", len);
	return (0);
}
