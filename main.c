#include "main.h"
#include <stdio.h>
int main(void)
{
	int len;
	len =_printf("cinco%u %u %u %u", 0, 1, 123123, -1);
	printf("len = %d", len);
	return (0);
}
