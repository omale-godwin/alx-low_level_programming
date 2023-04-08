#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int n;

n = 1024;
set_bit(&n, 5);
printf("%lu\n", n);
n = 0;
set_bit(&n, 10);
printf("%lu\n", n);
n = 98;
set_bit(&n, 0);
printf("%lu\n", n);
return (0);
<<<<<<< HEAD
}
=======
}
>>>>>>> 4f3ff1460b5b0c9384107df87f61c1490f8bf50c
