#include <stdio.h>

int _atoi(char *s)
{
	int i;
	char num = '0';
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		while (s[i] != num && num < 59)
		{
			num++;
		}
		n = num;
	
	}
	printf("%d\n", n);
	return (0);
}
