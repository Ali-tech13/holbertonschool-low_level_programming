#include "main.h"
/**
* rev_string - function that reverses a string
*
* @s: string to check
*
* Return: void
*
**/
void rev_string(char *s)
{
int i;
int start;
int end;
char tmp;
i = 0;
while (s[i] != '\0')
{
i++;
}

start = 0;
end = i - 1;

while (start < end)
{
tmp = s[start];
s[start] = s[end];
s[end] = tmp;
start++;
end--;
}
}
