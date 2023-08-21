/**
 * _isupper - checks if provided character is uppercase
 *@c: character to check
 * Return: 1 if uppercase 0 if otherwise
 */

int _isupper(int c)
{
	int cUpper = 65;

	while (cUpper < 91)
	{
		if (c == cUpper)
		{
			return (1);
		}
		else
		{
			cUpper++;
		}
	}
	return (0);
}
