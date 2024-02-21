#include "main.h"
/**
 * _isalpha - check alphabet
 * @c: the alphabet to check
 *
 * Return: 0.
 */
int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
