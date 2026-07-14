#include "main.h"
/**
* _strlen - Write a function that returns the length of a string.
* @s: char to check
*
* Return: always len
*
**/
int _strlen(char *s)
{
int i;
int len = 0;
for (i = 1; i > 0; i++)
{
if (*s == '\0')
break;
len++;
s++;
}
return (len);
}
