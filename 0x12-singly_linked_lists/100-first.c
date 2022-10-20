#include <stdio.h>
/*******constructors*********/
void adv_links(void) __attribute__((constructor));
/**
 * adv_links - executed before main
 * Return - no value
 */
void adv_links(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
