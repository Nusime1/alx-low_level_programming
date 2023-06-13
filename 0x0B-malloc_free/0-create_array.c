#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *Description: create an array of chars, that initialize with char
 *@size: the size of array
 *@c: the initialized char of the array
 *Return: NULL if size = 0 or array = NULL
 *Else - pointer to the array
 */

char *create_array(unsigned int size, char c);
{
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arrary[i] = c;
	}
	return (array);
}
