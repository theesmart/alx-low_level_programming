#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *Assign a random number to the variable n.
 *Print the number 
 *return 0
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	

         if (n>0)
	 {
         printf(" %d is positive/n",n);
	 }
	 else if (n==0)
	 {
         printf(" %d is equal to 0/n",n);
	 }
         else
	 {
          printf(" %d is negative/n",n);
	 }

	return (0);
} 
