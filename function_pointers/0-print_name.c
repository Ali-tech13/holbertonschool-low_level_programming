#include "main.h"
/**
* print_name - prints a name using a callback func
*
*@name: the name to print
*
*@f: pointer to function used to print name
*
*
**/
void print_name(char *name, void (*f)(char *))
{
f(name);
}
