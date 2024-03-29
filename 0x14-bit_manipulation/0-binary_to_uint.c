#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: A pointer to a string containing the binary number
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1 or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			num <<= 1;
			num += (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}

	return (num);
}
