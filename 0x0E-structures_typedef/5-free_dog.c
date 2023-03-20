alx-low_level_programming/0x0E-structures_typedef/5-free_dog.c
@BrightDaniel
BrightDaniel strutures
Latest commit b6d7bff on Aug 1, 2022
 History
 1 contributor
18 lines (17 sloc)  208 Bytes

#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: pointer to dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

