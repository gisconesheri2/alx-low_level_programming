/**
 * _islower - checks if a character provided is lowercase
 * @c: character to run through the function
 *
 * Return: 1 if lowercase. 0 otherwise
 */

int _islower(int c)
{
	int lowerC = 97;

	while (lowerC < 123)
	{
		if (c == lowerC)
		{
			return (1);
		}
		lowerC++;
	}
	return (0);
}
