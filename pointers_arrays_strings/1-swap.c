#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers
 * Return: Always 0.
 * @a:variables
 * @b:variables
 */
void swap_int(int *a, int *b)
{
	int l;

	l = *a;
	*a = *b;
	*b = l;
}
