#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 122; i > 96;)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
