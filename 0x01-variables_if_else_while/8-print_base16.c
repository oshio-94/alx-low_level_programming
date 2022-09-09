#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58;)
	{
		putchar(i);
		i++;
	}
	for (i = 97; i < 103;)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
