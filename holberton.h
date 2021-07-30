#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

#include <stdio.h>

/**
 * struct math_complex - holds the complex number
 * a + ib represented by two dobles.
 * @re: stores the real part of the number.
 * @im: stores the imaginary part of the number.
 */
typedef struct math_complex
{
	double re, im;
} complex;

void display_complex_number(complex c);

#endif
