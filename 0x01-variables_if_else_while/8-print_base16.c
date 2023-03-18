#include <stdio.h>
/**
 * main - main function
 *
 *Return: always 0 (Success)
 */
int main(void)
{
int i;
char I;
for (i = 0 ; i < 10 ; i++)
putchar(i + '0');
for (I = 'a'; I <= 'f' ; I++)
putchar(I);
putchar('\n');
return (0);
}
