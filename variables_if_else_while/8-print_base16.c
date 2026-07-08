#include <stdio.h>
/**
* main - Print a program that prints all the numbers of base 16 in lowercase,
* followed by a new line.
* Return: Always 0
**/
int main(void)
{

int i;
char letter;

i = 0;
letter = 'a';

while (i < 10)
{
putchar(i + '0');
i++;
}

while (letter <= 'f')
{
putchar(letter);
letter++;
}

putchar('\n');

return (0);
}
