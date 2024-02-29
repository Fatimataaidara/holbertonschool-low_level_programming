#include "main.h"

/**
 * _strncat - Concatenate two strings, using at most n bytes from src
 * @dest: The destination string
 * @src: The source string to concatenate
 * @n: The maximum number of bytes from src to append to dest
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	{
	}

	for (j = 0; src[j] != '\0' && j < n; j++)

	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}
