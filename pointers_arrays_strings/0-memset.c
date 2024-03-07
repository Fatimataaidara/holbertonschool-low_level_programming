#include "main.h"
<<<<<<< HEAD
/**
 * _memset - function that fills memory with a constant byte
 *@s: first value
 *@b: second value
 *@n: thirth value
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
=======

/**
 * _memset - to fill memory with a constante byte
 * @s: pointer content the memory area to fill
 * @n: the size of memory space
 * @b: the constante byte to use to fill memory
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
>>>>>>> bfb1935028751855fd1724acc96a20ba7790c621
	}
	return (s);
}
