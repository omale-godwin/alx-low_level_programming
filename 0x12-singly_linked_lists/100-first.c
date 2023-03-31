#include <stdio.h>
void print_first(void) __attribute__ ((constructor));

/**
 * print_first - constructor compiler attribute,
 * this actually print a message before the main is executed
 */

void print_first(void)
{    /*  I bore my house upon my back!*/
	printf("You're beat! and yet, you must allow,\n");

	/** I bore my house upon my back! */
	printf("I bore my house upon my back!\n");
}
