#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

void times_table(void)
{
int rone, cone, d;
{
_putchar('0');
_putchar(',');
_putchar('');
for (cone = 1; cone <= 9; cone++)
{
d = (rone * cone);
if ((d / 10) > 0)
{
_putchar((d / 10) + '0');
}
else
{
_putchar('');
}
_putchar((d % 10) + '0');

if (cone < 9)
{
_putchar(',');
_putchar('');
}
}
_putchar('\n');
}

}
