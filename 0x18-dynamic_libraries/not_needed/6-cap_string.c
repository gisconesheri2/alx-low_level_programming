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
 * cap_string - capitalises the first letter of a word after a separator
 * @s: string to process
 * Return: pointer to the changed string
 */

char *cap_string(char *s)


{
	char separators[14] = "\n \t,;.!?\"(){}";

	int i;
	int pos;
	int cpos = 0;

	for (pos = 0; s[pos] != '\0'; pos++)
	{
		for (i = 0; i < 14; i++)
		{
			if (s[pos] == separators[i])
			{
				cpos = pos + 1;
				*(s + cpos) = get_upper(s[cpos]);
			}
		}
	}
	s[pos] = '\0';
	return (s);
}
