#include "main.h"
/**
* is_prime_number - Checks if a number is prime.
* @n: The number to check.
* @i: current integer being tested as a factor
* Return: 1 if n is prime, 0 otherwise.
*/
int is_prime_helper(int n, int i);
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
else if (n == 2)
{
return (1);
}
else
return (is_prime_helper(n, 2));
}
/**
* is_prime_helper -  function for checking if a number is prime.
* @n: number to check.
* @i: current integer being tested as a factor.
*
* Return: 1 if n is prime, 0 otherwise.
*/
int is_prime_helper(int n, int i)
{
if (n % i == 0)
{
return (0);
}
else if (i * i > n)
{
return (1);
}
else
return (is_prime_helper(n, i + 1));
}

