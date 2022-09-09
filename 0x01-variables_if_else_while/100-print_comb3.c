#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int e;	
	i = 48;
	e = 48;
	
	while (e < 58)
	{
		while (i < 58)
		{
			putchar(e);
			putchar(i);
			if (i == 57 && e == 57)
		{
			break;
		}
			putchar(',');
			putchar(' ');
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);

}
