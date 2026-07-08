#include "main.h"
/**
* jack_bauer - prints every minute of the day
*
*
* Return: void
*
**/
void jack_bauer(void)
{
int hour;
int min;

hour = 0;
min = 0;
while (hour <= 23)
{
while (min <= 59)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
min++;
}
min = 0;
hour++;
}
}
