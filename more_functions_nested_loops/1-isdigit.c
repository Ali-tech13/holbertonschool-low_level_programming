#include "main.h"
/**
* _isdigit - checks for a digit (0 through 9)
* @c: number to check
*
* Return: 1 if it's digit - 0 otrherwise
**/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
