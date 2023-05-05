#include "main.h"
#include <unistd.h>
/**
 * _putchar - funtion to print the code
 * @c: char variable 0.
 *
 * Return On success 1.
 * on error -1 is return
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}

