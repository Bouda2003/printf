#include "main.h"
#include <stdio.h>

void main()
{
	int cnt;

	cnt = _printf("%c %s %% %r",'1', "23");
	printf("\n%d\n", cnt);

}
