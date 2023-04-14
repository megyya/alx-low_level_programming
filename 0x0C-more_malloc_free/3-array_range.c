#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: first element
 * @max: maximum element
 *
 * Return: new array
 */
int *array_range(int min, int max)
{
int *ptr;
int i, length;
if (min > max)
return (NULL);
length = max - min + 1;
ptr = malloc(sizeof(int) * length);
if (ptr == NULL)
return (NULL);
for (i = 0; min <= max; i++)
ptr[i] = min++;
return (ptr);
}
