#include <stdio.h>
/**
 * _strspn - gets the number of bytes of s containing all of accept characters
 * @s: string to search in
 * @accept: substring to search for
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, run, m;
	unsigned int count;
	unsigned int max = 0;
	char found[99];

	for (i = 0; s[i] != '\0'; i++)
	{
		run = 1;
		/*printf("matching %c\n", s[i]);*/
		for (count = 0; count < 99; count++)
		{
			if (s[i] == found[count])
			{
				/*printf("%c already found at %d\n", s[i], max);*/
				run = 0;
				break;
			}
		}

		if (run == 1)
		{
			/*printf("running the accept string\n");*/
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
				{
					found[i] = accept[j];
					m = i + 1;
					if (m > max)
					{
						/*printf("%c found, setting max to %d\n", s[i], i + 1);*/
						max = m;
					}
				}
			}
		}
	}

	/*printf("max is %d\n", max);*/
	return (max);
}
