#include "main.h"
/**
* *_strcat - function that concatenates two strings.
*
* @dest: string to copy to
* @src: String to copy from
*
* Return: char
*
**/
char *_strcat(char *dest, char *src)
{
int len;
int i;
len = 0;
while (dest[len] != '\0')
{
len++;
}
for (i = 0; src[i] != '\0'; i++)
{
dest[len] = src[i];
len++;
}
dest[len] = '\0';
return (dest);
}
