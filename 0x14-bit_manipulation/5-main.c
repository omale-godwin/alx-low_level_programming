#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned int n;

n = flip_bits(1024, 1);
printf("%u\n", n);
n = flip_bits(402, 98);
printf("%u\n", n);
n = flip_bits(1024, 3);
printf("%u\n", n);
n = flip_bits(1024, 1025);
printf("%u\n", n);
return (0);
<<<<<<< HEAD
}
=======
}
>>>>>>> 4f3ff1460b5b0c9384107df87f61c1490f8bf50c
