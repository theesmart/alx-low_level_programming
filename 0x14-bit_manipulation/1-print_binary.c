#include "main.h"

/**
 *Author: Samuel Kinyua Mutembei
 * print_binary - prints the binary representation of a number
 * @n: unsigned long integer to convert
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	/* Set the mask to the highest bit of n */
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	/* Find the first non-zero bit of n */
	while (mask > 0 && (n & mask) == 0)
		mask >>= 1;

	/* Print the binary digits of n */
	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
