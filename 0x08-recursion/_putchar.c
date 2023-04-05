#include "main.h"
#include <unistd.h>
/**
* _putchar -  function that prints the character c to stdout
* @c: print the character
*
* Return: success 1
* On error, return -1, and set errno
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

