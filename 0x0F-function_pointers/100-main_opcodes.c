#include <stdlib.h>
#include <stdio.h>
/**
 * print_opcodes - print the opcodes of this program
 * @a: address of the main function
 * @n: number og bytes to print
 * Return: void
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, nb;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < nb; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != nb - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
