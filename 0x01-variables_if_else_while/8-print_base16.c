#include <stdio.h>
/**
 * main entry point
 *
 * return: always 0
 */

int main(void)
{
	int i;
	char c;
	 for (i = 0; i < 10; i++)
	{
	 putchar ('0' + i);
	}
	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);


}
