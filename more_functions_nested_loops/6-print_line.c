#include "main.h"
/**
* print_line - function that draws a straight line
* @n: number to check
*
* Return: void
*
**/
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
