#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - new dog
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *dodge;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dodge = malloc(sizeof(dog_t));
	if (dodge == NULL)
	{
		free(dodge);
		return (NULL);
	}
	dodge->name = malloc(i * sizeof(dodge->name));
	if (dodge->name == NULL)
	{
		free(dodge->name);
		free(dodge);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		dodge->name[k] = name[k];
	dodge->age = age;
	dodge->owner = malloc(j * sizeof(dodge->owner));
	if (dodge->owner == NULL)
	{
		free(dodge->owner);
		free(dodge->name);
		free(dodge);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dodge->owner[k] = owner[k];
	return (dodge);
}
