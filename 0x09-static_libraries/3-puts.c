#include "main.h"
/**
 * _puts - prints a string followed by a new line to stdout
 * @s: string parameter to print
 */
void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s + 0);
s++;
}
_putchar('\n');
}
