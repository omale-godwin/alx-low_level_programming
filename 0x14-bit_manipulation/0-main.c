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

n = binary_to_uint("1");
printf("%u\n", n);
n = binary_to_uint("101");
printf("%u\n", n);
n = binary_to_uint("1e01");
printf("%u\n", n);
n = binary_to_uint("1100010");
printf("%u\n", n);
n = binary_to_uint("0000000000000000000110010010");
printf("%u\n", n);
return (0);
<<<<<<< HEAD
}
=======
}
>>>>>>> 4f3ff1460b5b0c9384107df87f61c1490f8bf50c
