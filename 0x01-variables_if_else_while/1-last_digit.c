#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
* main - print a text aacording to number
* return: always (success)
*/
void main(void)

{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*My code starts here */

	ld = n % 10;
	if (ld > 5)
      	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
 	else if (ld == 0)
	{
		printf("Last digit of %d is %d and 0\n", n, ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
}
