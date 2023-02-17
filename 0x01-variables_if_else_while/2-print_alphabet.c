#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets
 *
 * Return:Always  0 (success)
 */
int main(void)
{
	char c;
       c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
