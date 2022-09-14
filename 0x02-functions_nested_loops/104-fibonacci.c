#include <stdio.h>
/**
 * main -check that code
 *
 * Return: Always 0
 */

int main(void)
{
n3 = n1 + n2;
printf("%lu, ", n3);
n1 = n2;
n2 = n3;
}
n1_h1 = n1 / 10000000000;
n2_h1 = n2 / 10000000000;
n1_h2 = n1 % 10000000000;
n2_h2 = n2 % 10000000000;
for (inc = 93; inc < 99; inc++)
{ 
h1 = n1_h1 + n2_h1;
h2 = n1_h2 + n2_h2;
if ((n1_h2 + n2_h2) > 9999999999)
{
h1 += 1;
h2 %= 10000000000;
}
printf("%lu%lu", h1, h2);
if (inc != 98)
printf(", ");

n1_h1 = n2_h1;
n1_h2 = n2_h2;
n2_h1 = h1;
n2_h2 = h2;
}
print("\n")
return (0);
}
