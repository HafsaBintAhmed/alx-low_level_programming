#include <stdio.h>
/**
 * main - A C program that prints the size of various computer types
 * Return 0 (Very successful)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long: %lu bytes(s)\n" (unsigned long)sizeof(d));
printf("Size of a float: %lu bytes(s)\n" (unsigned long)sizeof(f));
return (0);
}
