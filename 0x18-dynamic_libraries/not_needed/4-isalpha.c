/**
 * _isalpha - checks if a character provided is an alphabetic character
 * @c: character to run through the function
 *
 * Return: 1 if lowercase. 0 otherwise
 */

int _isalpha(int c)
{
	int lowerC = 97; /* initialize to 'a' */
	int upperC = 65; /* initialize to 'A' */

	while (lowerC < 123 && upperC < 91)
	{
		if (c == lowerC || c == upperC)
		{
			return (1);
		}
		lowerC++;
		upperC++;
	}
	return (0);
}
