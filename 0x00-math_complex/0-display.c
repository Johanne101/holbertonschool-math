#include "holberton.h"

/**
 * display_complex_number - function displays the complex numbers.
 * @c: string of complex numbers.
 */
void display_complex_number(complex c)
{
	printf("%.f", c.re);
	if (c.im != 0)
	{
		if (c.im > 0)
			printf(" + ");
		else
			printf(" - ");
		if (c.im != -1 && c.im != 1)
			printf("%.f", c.im);
		printf("i");
	}
	printf("\n");
}
