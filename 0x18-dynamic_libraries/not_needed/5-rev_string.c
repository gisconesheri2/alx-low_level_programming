#include <stdio.h>

void rev_string(char *s)
{
	int i, j, k;
	char temp;
	char r[1000];

	for (i = 0; s[i] != '\0'; i++)
	{
		r[i] = s[i];
		k++;
	}

	for (j = 0; j <= k; j++)
	{
		temp = r[i];
		printf("%c", temp);
		s[j] = '\0';
		s[j] =temp;
		i--;
	}
	s[j++] = '\0';
}
