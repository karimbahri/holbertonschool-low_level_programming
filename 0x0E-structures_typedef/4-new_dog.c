#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int lenght_name = 0, lenght_owner = 0;

	dog = malloc(sizeof(dog_t));

	if (!dog)
		return (NULL);
	if (name)
		lenght_name = _strlen(name);
	if (owner)
		lenght_owner = _strlen(owner);

	dog->age = age;

	dog->name = malloc(sizeof(char) * lenght_name + 1);

	if (!dog->name)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * lenght_owner + 1);

	if (!dog->owner)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	if (name)
		_strcpy(dog->name, name);
	if (owner)
		_strcpy(dog->owner, owner);

	return (dog);
}

/**
 * _strlen - return the length of a string
 * @s: the string to check
 * Return: lenght
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * _strcpy - copy a string from src to dest
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0 ; i <= _strlen(src) ; i++)
		dest[i] = src[i];

	return (dest);
}
