/**
 * leet - ruuns a leet subsitituion algorithm
 * @s: string to process
 * Return: pointer to the amended string
 */
char *leet(char *s)
{
	char to_replace[11] = "aeotlAEOTL";
	char replace_nos[11] = "4307143071";

	int i;
	int pos;
	int cpos = 0;

/*go through each character in the string till we reach the end character*/
	for (pos = 0; s[pos] != '\0'; pos++)
	{
		/*for each character, run through the to_replace array*/
		for (i = 0; i < 11; i++)
		{
			/*if both match, replace with the char with a no*/
			if (s[pos] == to_replace[i])
			{
				cpos = pos;
				*(s + cpos) = replace_nos[i];
			}
		}
	}
	s[pos] = '\0';
	return (s);
}
