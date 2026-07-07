#include "main.h"
/**
* print_alphabet - print every letter
*
* Return: Void
**/
void print_alphabet(void);


void print_alphabet(void)
{
char letter;
letter = 'a';

while (letter <= 'z')
{
_putchar(letter);
_putchar('\n');
}
}
