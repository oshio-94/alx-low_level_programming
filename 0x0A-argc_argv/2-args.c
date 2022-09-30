#include <stdio.h>
/**
 * main - prints all arguments it receivs
 * @argc: number of cammand line arguments
 * @argv: array that contaions the program command line arguments
 * Return: 0 for success
 */
int main(int agrc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
