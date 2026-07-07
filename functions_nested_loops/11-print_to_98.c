#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print to the number 98
* @n: number to check
*
* Return: Always 0
*
**/
void print_to_98(int n)
{
while (n > 98)
{
printf("%d\n", n--);
printf(", ");
}
while (n < 98)
{
printf("%d\n", n++);
printf(", ");
}
printf("%d\n", n);
}
