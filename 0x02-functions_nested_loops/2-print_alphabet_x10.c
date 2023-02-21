#include "main.h"

/**
 * print_alphabet_10 - a function that prints 10 times the alphabet
 *
 * return: x10 a-z
 */
void print_alphabet_10(void)
{
	int n, co;

	co = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)

		{
			_putchar(n);
		}
	co++;
	_putchar('\n');
	}
}
