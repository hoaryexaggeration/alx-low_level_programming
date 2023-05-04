#include "main.h"

/**
 * clear_bit - clears the bit and setting it to  0
 * @n: points to the number to be changed
 * @index: index of the bit to clear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
