#include "dog.h"
#include "main.h"
#include <stdlib.h>
/**
* *new_dog - function that creates a new dog.
*
*@name: name of dog
*@age: age of dog
*@owner: owner of dog
*
* Return: dog_t
**/
dog_t *new_dog(char *name, float age, char *owner)
{
int i;
char *newName;
char *newOwner;
int newAge;
dog_t *dog;
int len = 0;
int len1 = 0;
dog = malloc(sizeof(dog_t));
while (name[len] != '\0')
{
len++;
}
while (owner[len1] != '\0')
{
len1++;
}
newName = malloc((len + 1) * sizeof(char));

for (i = 0; i < len; i++)
{
newName[i] = name[i];
}
newName[i] = '\0';

newOwner = malloc((len1 + 1) * sizeof(char));

for (i = 0; i < len1; i++)
{
newOwner[i] = owner[i];
}
newOwner[i] = '\0';
newAge = age;

dog->name = newName;
dog->owner = newOwner;
dog->age = newAge;


return (dog);
}
