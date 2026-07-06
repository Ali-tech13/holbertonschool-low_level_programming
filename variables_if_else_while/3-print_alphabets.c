#include <stdio.h>
/**
* main - Print the alphabet in lowercase then in uppercase
*
* Return: Always 0
**/
int main(void)
{

char letter;

letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}

while (letter <= 'Z')
{
putchar(letter);
letter++;
}

putchar('\n');


return (0);
}
