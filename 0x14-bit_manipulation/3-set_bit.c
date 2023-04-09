#include "main.h"


/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long integer to get the bit from
 * @index: index of the bit, starting from 0 (0 is the rightmost bit)
 *
 * Return: value of the bit at index or -1 if an error occurred
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}

