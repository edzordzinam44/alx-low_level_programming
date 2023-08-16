#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that frees dogs ie their memory
 * @d: struct dog to be freed
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
