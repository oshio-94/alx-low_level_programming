#include <stdio.h>

/**
 * main - Prints largest prime factor
 * Return: Always 0
 */
int main(void)
{
	long int n, z;

	n = 612852475143;
	for (z = 2; z <= n; z++)
	{
		if (n % z == 0)
		{
			n /= z;
			z--;
		}
	}
	printf("%ld\n", z);
	return (0);
}
