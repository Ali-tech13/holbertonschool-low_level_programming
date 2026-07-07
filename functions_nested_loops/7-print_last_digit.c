#include "main.h"
#include <stdio.h>
/**
* print_last_digit - prints last digit
*
* @n: number to check
*
* Return: Return the value of the last digit
*
**/
int print_last_digit(int n)
{
int a;
if (n >= 0)
{
n = n % 10;
_putchar(n + '0');
return (n);
}
else
{
a = _abs(n);
n = a % 10;
_putchar(n + '0');
return (n);
}
}
