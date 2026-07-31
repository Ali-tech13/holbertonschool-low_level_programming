#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a char
 * @args: variadic arguments
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: variadic arguments
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: variadic arguments
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: variadic arguments
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of argument types
 */
void print_all(const char * const format, ...)
{
	int i;
	int j;
	char *separator;
	va_list args;

	typedef struct printer
	{
		char symbol;
		void (*print)(va_list);
	} printer_t;

	printer_t printers[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	i = 0;
	separator = "";

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (j < 4)
		{
			if (format[i] == printers[j].symbol)
			{
				printf("%s", separator);
				printers[j].print(args);
				separator = ", ";
			}

			j++;
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
