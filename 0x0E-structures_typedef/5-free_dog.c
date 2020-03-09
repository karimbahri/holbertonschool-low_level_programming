#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dogs
 * @d: dog to free
 */
void free_dog(dog_t *d)
{
	free(d);
}
