#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
<<<<<<< HEAD
        unsigned int intg;
        int length, base2;

        if (!b)
                return (0);

        intg = 0;

        for (length = 0; b[length] != '\0'; length++)
                ;

        for (length--, base2 = 1; length >= 0; length--, base2 *= 2)
        {
                if (b[length] != '0' && b[length] != '1')
                {
                        return (0);
                }

                if (b[length] & 1)
                {
                        intg += base2;
                }
        }

        return (intg);
}
=======
	unsigned int intg;
	int length, base2;

	if (!b)
		return (0);

	intg = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, base2 = 1; length >= 0; length--, base2 *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			intg += base2;
		}
	}

	return (intg);
}
>>>>>>> 4f3ff1460b5b0c9384107df87f61c1490f8bf50c
