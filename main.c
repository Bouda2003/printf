#include <stdio.h>
#include "main.h"

void main ()
{
	int cnt;

	cnt = _printf("%d\n%i", 1234, 1234);
	printf("\n%d\n", cnt);
}
