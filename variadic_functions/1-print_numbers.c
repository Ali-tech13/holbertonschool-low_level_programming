#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers -  function that prints numbers, followed by a new line.
*
* @separator: string to print between num
* @n: number of int passed to the function
* Return: void
**/
void print_numbers(const char *separator,
const unsigned int n, ...)
{
unsigned int i;
int num;
va_list aq;
va_start(aq, n);
for (i = 0; i < n; i++)
{
num = va_arg(aq, int);
printf("%d", num);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
va_end(aq);
printf("\n");
}
