#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int size = sizeof(unsigned long int) * 8;
	int printed = 0;

	mask <<= size - 1;

	while (mask)
	{
		if (n & mask)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

	if (!printed)
		_putchar('0');
}
