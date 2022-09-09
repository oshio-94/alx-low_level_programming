#include<stdlib.h>
#include<time.h>
/**
 * main -Entry point
 *
 * return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0
