#include <unistd.h>

/**
 * _putchar - prints/writes character
 * @character: The character tp print
 * Return: 1, success, -1 error
 */
int _putchar(char character)
{
	return (write(1, &character, 1));
}
