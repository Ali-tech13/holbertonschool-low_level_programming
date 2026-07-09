#include "main.h"
/**
* fizz_buzz - program that prints the numbers from 1 to 100,
* followed by a new line.
*
*
*
* Return: void
*
**/
void fizz_buzz(void)
{
int i;
for (i = 0; i < 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
_putchar('FizzBuzz');
}
if (i % 3 == 0)
{
_putchar('Fizz');
}
if (i % 5 == 0)
{
_putchar('Buzz');
}
_putchar('\n');
}
}
