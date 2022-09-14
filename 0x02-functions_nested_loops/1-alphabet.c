#include <stdio.h>
#include "main.h"

/**
 * main -Entry point
 * Descripion: print the alphabets in lowercase
 * Return: Always 0 (success.)
 */

void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
