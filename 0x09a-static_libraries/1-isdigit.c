/**
 * _isdigit - checks if provided character is uppercase
 *@c: character to check
 * Return: 1 if c is digit 0 if otherwise
 */

int _isdigit(int c)
{
	int cUpper = 48;

	while (cUpper < 58)
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
