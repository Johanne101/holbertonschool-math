#include "holberton.h"

/**
 * display_complex_number - function displays the complex numbers.
 * @c: string of complex numbers.
 */
void display_complex_number(complex c)
{
	if (c.im == 0)
		printf("%.f\n", c.re);
	else
	printf("%.f + %.fi\n", c.re, c.im);
}
