#include "main.h"
#include <stdio.h>
/**
 * _isdigit - a function that checks for a digit
 * Return: 0 or 1
 * @c:variable
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
		return (0);
}
