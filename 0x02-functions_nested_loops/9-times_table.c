#include "main.h"
/**
 * times_table - Prints the 9 times table
 *
 * Return: no return
 */
void times_table(void)
{
	int a, b, prdct;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			prdct = a * b;
			_putchar(44);
			_putchar(32);
			if (op <= 9)
			{
				_putchar(32);
				_putchar(prdct + 48);
			}
			else
			{
				_putchar((prdct / 10) + 48);
				_putchar((prdct % 10) + 48);
			}
		}
		_putchar('\n');
	}
}

