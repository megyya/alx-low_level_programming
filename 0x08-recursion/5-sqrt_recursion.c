#include "main.h"

/**
* _sqrt_recursion - function that prints the natural square root of a number
* @number: the number
* @i: the square root
*
* Return: result
*/
int square(int number, int i);
int _sqrt_recursion(int number)
{
return (square(number, 1));
}

/**
* square - function to find square root
* @number: the number
* @i: the square root
*
* Return: result
*/
int square(int number, int i)
{
if (i * i == number)
return (i);
else if (i * i < number)
return (square(number, i + 1));
else
return (-1);
}

