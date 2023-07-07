/**
 * _memset - changes the value stored in s with b until the n-th byte
 * @s: buffer that has to be changed
 * @b: value with which to reset the values stored in s
 * @n: number of bytes to set to b
 *
 * Return: pointer to the changed s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
