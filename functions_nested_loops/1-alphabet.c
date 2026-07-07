#include "main.h"
/**
* print_alphabet - print every letter
*
* Return: Void
**/
void print_alphabet(void);
/**
* main - call the function print_alphabet whit new-line
*
* Return: Always 0
**/
int main(void)
{
print_alphabet();
return (0);
}

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
