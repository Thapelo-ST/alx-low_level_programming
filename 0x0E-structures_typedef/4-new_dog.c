#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 * @str: string to duplicate
 *
 * Return: pointer to duplicated string in allocated memory
 */

/* declaring strdup fuinction */
char *_strdup(char *str);

/*strdup function */
char *_strdup(char *str)
{
	char *cstr;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		j++, i++;
	j++;

	cstr = malloc(sizeof(char) * j);

	if (cstr == NULL)
		return (NULL);

	i = 0;
	while (i < j)
	{
		*(cstr + i) = *(str + i);
		i++;

	}

	return (cstr);

}

/**
 * new_dog - function that creates a new dog
 * @name: pointer to the dog's name
 *  @age: dog's age
 *  @owner: pointer to the dog's owner
 *
 *  Return: pointer to the new dog
 */

/*dog t function*/
dog_t *new_dog(char *name, float age, char *owner)
{
	/*allocating memory for stroring*/
	dog_t *new_dog = malloc(sizeof(dog_t));
	/*cheking memory*/
	if (new_dog == NULL)
	{
		return (NULL);
	}
	/*assigning memory and copying if memory is avaliable*/
	new_dog->name = _strdup(name);
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	/*check if assignment succeded*/
	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	return (new_dog);
}
