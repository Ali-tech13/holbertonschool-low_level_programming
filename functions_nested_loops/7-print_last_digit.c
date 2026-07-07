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
if (n >= 0)
{
n = n % 10;
}
else
{
_abs(n);
n = n % 10;
}
}
