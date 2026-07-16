#include "main.h"
#include <stddef.h>
/**
* *_strchr - function that locates a character in a string.
*
* @s: pointer to the array
* @c: charater to search
*
* Return: the adress of char if found - NULL if not
*
**/
char *_strchr(char *s, char c)
{
int i;
int len = 0;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
if (s[i] == c)
{
return (&s[i]);
}
}
return (NULL);
}
