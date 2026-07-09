#include "main.h"
#include <stdio.h>
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
printf("FizzBuzz");
}
if (i % 3 == 0)
{
printf("Fizz");
}
if (i % 5 == 0)
{
printf("Buzz");
}
printf('\n');
}
}
