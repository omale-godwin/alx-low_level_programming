#include "main.h"

/**
 * binary_to_uint - a binary number function that convert to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int intg;
int lenth, bas2;

if (!b)
return (0);

intg = 0;

for (lenth = 0; b[lenth] != '\0'; lenth++)
;

for (lenth--, bas2 = 1; lenth >= 0; lenth--, bas2 *= 2)
{
if (b[lenth] != '0' && b[lenth] != '1')
{
return (0);
}

if (b[lenth] & 1)
{
intg += bas2;
}
}
return (intg);
}

