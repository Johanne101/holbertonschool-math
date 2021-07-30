#include "holberton.h"

/**
 * display_complex_number - function displays the complex numbers.
 * @c: string of complex numbers.
 */
void display_complex_number(complex c)
{
	double abs = c.im;

	printf("%.f", c.re);
	if (c.im != 0)
	{
		if (c.im > 0)
			printf(" + ");
		else
		{
			printf(" - ");
			abs = c.im * -1;
		}
		if (abs != 1)
			printf("%.f", abs);
		printf("i");
	}
	printf("\n");
}
