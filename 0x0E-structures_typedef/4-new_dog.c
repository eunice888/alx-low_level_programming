#include <stdlib.h>
#include "dog.h"

/**
 * _a - llgth of a string
 * @s: string 
 *
 * Return: gives the llgth of the string
 */
int _a(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_b - copies the string pointed to by hh
 * including the terminating null byte (\0)
 * to the buffer pointed to by g
 * @g: buffer in which we copy the string
 * @hh: string to be copied
 *
 * Return: the pointer to g
 */
char *_b(char *g, char *hh)
{
	int ll, i;

	ll = 0;

	while (hh[ll] != '\0')
	{
		ll++;
	}

	for (i = 0; i < ll; i++)
	{
		g[i] = hh[i];
	}
	g[i] = '\0';

	return (g);
}

/**
 * new_dog - create a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int u, v;

	u = _a(name);
	v = _a(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (u + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (v + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_b(dog->name, name);
	_b(dog->owner, owner);
	dog->age = age;

	return (dog);
}
