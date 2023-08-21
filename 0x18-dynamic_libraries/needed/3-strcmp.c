/**
 * get_num - generates coressponding ascci code for the char
 * @c: character to conver
 * Return: integer coressponding to c
 */

int get_num(char c)
{
	int n = 31;

	while (n < 127)
	{
		if (c == n)
		{
			return (n);
		}
		n++;
	}
	return (0);
}
/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: number indicating comparison
 */

int _strcmp(char *s1, char *s2)
{
	int total = 0;
	int total2 = 0;
	int count, diff;

	for (count = 0; s1[count] != '\0'; count++)
	{
		total = total + get_num(s1[count]);
	}
	count = 0;
	for (count = 0; s2[count] != '\0'; count++)
	{
		total2 = total2 + get_num(s2[count]);
	}

	diff = (total - total2);
	if (diff < 0)
		return (-15);
	else if (diff > 0)
		return (15);
	else
		return (0);
}
