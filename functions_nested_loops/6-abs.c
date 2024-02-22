#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @value: the value that compute
 *
 * Return: int
 */
int _abs(int value)
{
	if (value < 0)
		value = -value;
	return (value);
}
