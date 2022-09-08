#include<stdio.h>
/*
 * main -entry point
 *
 * return: 0
 */
int main()
{
	int integertype;
	char chartype;
	long int longinttype;
	long long int longlontinttype;
	float floattype;

	printf("Size of an int: %ld bytes\n", sizeof(integertype));
	printf("Size of a char: %ld bytes\n", sizeof(chartype));
	printf("Size of a long int: %ld bytes\n", sizeof(longinttype));
	printf("Size of a long long int: %ld bytes\n",sizeof(longlonginttype));
	printf("Size of a float: %ld bytes\n",sizeof(floattype));
	return (0);
}
