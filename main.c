#include "main.h"
#include <stdio.h>

void main(void)
{
		int cnt;

		cnt = _printf("%c %% %s %% %c %% %s %d", 'a', NULL, 'b', "efgh");
		printf ("\n%d\n", cnt);
}
