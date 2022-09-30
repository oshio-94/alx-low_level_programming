#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of the multiplication then a new line
 * @argc: number of command lines
 * @argv: array that contains the program command line arguments
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return(0);
}
