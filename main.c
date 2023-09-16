#include "main.h"
#include <stdio.h>

void main(void)
{
		int cnt  = _printf("%c %% %s %% %c %% %s", 'a', "abcd", 'b', "efgh");	
	       	printf ("\n%d\n", cnt);
}
