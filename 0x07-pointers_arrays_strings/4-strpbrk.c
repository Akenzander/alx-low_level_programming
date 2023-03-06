#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first occurrence in the string
 *
 * @accept: matches one of the bytes, or @NULL if no such bytes
 *
 * Return: a ponter to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
while (*s)
{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
			return (s);
	}
	s++;
}
return (NULL);
}

