#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates an array of chars
  * and initializes it with a specific char
  * @size: size of the array
  * @c: the char to initialize the array with
  *
  * Return: pointer to the array, NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}

	array = malloc(size * sizeof(char));

	if (!array)
	{
		return (0);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
