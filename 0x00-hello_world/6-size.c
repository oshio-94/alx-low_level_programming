#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main()
{
	int integertype;
	char chartype;
	long int longinttype;
	long long int longlontinttype;
	float floattype;
	printf("Size of an int: %d byte(s)\n", sizeof(integertype));
	printf("Size of a char: %d byte(s)\n", sizeof(chartype));
	printf("Size of a long int: %d byte(s)\n", sizeof(longinttype));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlonginttype));
	printf("Size of a float: %d byte(s)\n", sizeof(floattype));
	return (0);
}
