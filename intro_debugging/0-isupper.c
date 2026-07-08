#include "main.h"
/**
* _isupper - check if the input is uppercase
* @c: letter to check
*
* Return: - 1 if it's upper - 0 otherwise
**/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}