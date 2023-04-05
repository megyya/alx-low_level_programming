#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: points to the string
 *
 * Return: str_length
 */
int _strlen_recursion(char *s)
{
int str_length = 0;

if (*s > '\0')
{
str_length++;
str_length += _strlen_recursion(s + 1);
}

return (str_length);
}

