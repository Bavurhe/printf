#include <stdio.h>
#include "main.h"
#include <unistd.h>
#include <stdarg.h>


/**
 * - this is a test file for testing the custom printf function
 */

int main(void)
{
	int count_std = 0;
	int count_custom = 0;

	write(1, "STANDARD PRINTF\n", 16);
	count_std = printf("Tester\n");
	printf("I printed %d characters\n", count_std);

	write(1, "--------------------\n", 21);

	write(1, "CUSTOM PRINTF\n", 14);
	count_custom =  _printf2("Tester\n");
	printf("I printed %d characters\n", count_custom);
}
