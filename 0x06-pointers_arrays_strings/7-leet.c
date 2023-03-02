#include "main.h"
/**
 * leet - function to encodes a string into 1337
 * @s: inputed  string. 
 * Return: the  dest.
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
                        if (*(s + y) == lows[i] || *(s + y) == upps[i])
                        {
                                *(s + y) = numbs[i];
                                break;
                        }
                }
                y++;
        }

        return (s);
}
   
