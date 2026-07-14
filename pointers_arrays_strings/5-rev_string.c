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
i = 0;
int start;
int end;
start = 0;
end = i - 1;
while (s[i] != '\0')
{
i++;
}

while (start < end)
{
char tmp = '\0';
tmp = s[start];
s[start] = s[end];
s[end] = tmp;
start++;
end--;
}
}
