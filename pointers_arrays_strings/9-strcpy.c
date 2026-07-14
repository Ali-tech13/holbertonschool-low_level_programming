#include "main.h"
/**
* *_strcpy - see main
*
* @dest: dest to copy from src
* @src: src to copy to dest
*
* Return: char
*
**/
char *_strcpy(char *dest, char *src)
{
int i;
int len = 0;
while (src[len] != '\0')
{
len++;
}
for (i = 0; i <= len; i++)
{
dest[i] = src[i];
}
return (dest);
}
