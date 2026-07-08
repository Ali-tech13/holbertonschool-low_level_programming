#include <stdio.h>
/**
* main - Print all single digit numbers of base 10 starting from 0,
* followed by a new line.
*
* Return: Always 0
**/
int main(void)
{

int i;

i = 0;

while (i < 10)
{
putchar(i + '0');
i++;
}

putchar('\n');

return (0);
}
