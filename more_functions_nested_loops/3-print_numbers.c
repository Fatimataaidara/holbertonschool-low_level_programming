#include "main.h"
#include <stdio.h>

/**
 * print_numbers - fonction qui imprime les chiffres de 0 à 9
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("\n");
}
