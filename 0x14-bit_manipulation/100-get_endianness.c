/**
 * get_endianness - get the endianness of the system
 * Return: 1 if little endian, 0 if big endian
 */

int get_endianness(void)
{
	unsigned int x = 1;

	char *c = (char *) &x;

	return ((int)*c);
}
