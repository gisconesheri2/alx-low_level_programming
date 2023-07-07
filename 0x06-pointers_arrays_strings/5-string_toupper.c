/**
 * get_upper - converts the lc to uppercase
 * @lc: character to change
 * Return: a changed uppercase character or the original character
 */

char get_upper(char lc)
{
	char lowerC = 97;
	char upperC = 65;

/* check to see if lc is a lowercase character*/
/* if it is, get the corresponsing uppercase character ascii and return*/
	while (lowerC < 123)
	{
		if (lc == lowerC)
		{
			return (upperC);
		}
		lowerC++;
		upperC++;
	}

/* if it is not a lowercase character, return lc unchanged*/

	return (lc);
}

/**
 * string_toupper - changes lowercase characters to uppercase
 * @s: string to convert
 * Return: pointer to the all uppercase string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{

		*(s + i) = get_upper(s[i]);
	}
	return (s);
}
