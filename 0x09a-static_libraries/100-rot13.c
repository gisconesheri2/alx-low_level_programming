#include <stdio.h>
/**
 * rot13 - runs a rot 13 subsitituion algorithm
 * @s: string to process
 * Return: pointer to the amended string
 */
char *rot13(char *s)
{
	char input[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	int i;
	int pos;
	/*int cpos = 0;*/

/*go through each character in the string till we reach the end character*/
	for (pos = 0; s[pos] != '\0'; pos++)
	{
		/*for each character, run through the to_replace array*/
		for (i = 0; i < 53; i++)
		{
			/*if both match, replace with the char with a no*/
			if (s[pos] == input[i])
			{				
	/*			cpos = pos;*/
				s[pos] = output[i];
			}
		}
	}
	s[pos] = '\0';
	return (s);
}
