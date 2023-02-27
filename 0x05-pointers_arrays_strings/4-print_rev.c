#include "main.h"
#include "2-strlen.c"

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 * Return: void
 */

void print(char *s)
{
	int index;

	for (index = _strlen(s) - 1;
			index >= 0; index--)
	{
		_putchar(*(s + index));
	}
	_putchar('\n');
}
