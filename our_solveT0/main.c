#include <stdio.h>
#include "main.h"

void main ()
{
	int cnt;

	cnt = _printf("%c %%%%%% hi %g", 'd');
	printf("\n%d\n", cnt);
}
