#include "main.h"
#include <stddef.h>
/**
*_strpbrk - function that searches a string for any of a set of bytes.
*
* @s: pointer to array
* @accept: pointer to araay
*
* Return: null if not found - addres otherwise
*
**/
char *_strpbrk(char *s, char *accept)
{
int i;
int j;
int len = 0;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (NULL);
}
