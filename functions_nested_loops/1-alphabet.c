#include "main.h"
/**
* print_alphabet - print every letter
*
* Return: Void
**/

void print_alphabet(void)
{
char letter;
letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}
