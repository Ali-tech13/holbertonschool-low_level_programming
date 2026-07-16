#include "main.h"
/**
* _strspn - function that gets the length of a prefix substring.
*
* @s: pointer araay
* @accept: char to check
*
*
* Return: number of accepted chars - 0 if there is not
**/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;
	int len = 0;
	int found;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		found = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				count++;
				break;
			}
		}

		if (found == 0)
		{
			break;
		}
	}

	return (count);
}
