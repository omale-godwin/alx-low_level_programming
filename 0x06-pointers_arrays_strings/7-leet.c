#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input variable string. 
 * Return: the pointer to dest.
 */

char *leet(char *s)
{
	int y = 0, i;
	int lows[] = {97, 101, 111, 116, 108};
	int upps[] = {65, 69, 79, 84, 76};
	int numbs[] = {52, 51, 48, 55, 49};

	while (*(s + y) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + y) == lows[i] || *(s + y) == ups[i])
			{
				*(s + y) = numbs[i];
				break;
			}
		}
		y++;
	}

	return (s);
}
