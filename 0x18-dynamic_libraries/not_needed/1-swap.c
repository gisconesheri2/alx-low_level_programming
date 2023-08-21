/**
 * swap_int - swap the values of two integers
 * @a: integer one
 * @b: integer two
 */

void swap_int(int *a, int *b)
{
	int inter;

	inter = *a;
	*a = *b;
	*b = inter;
}
