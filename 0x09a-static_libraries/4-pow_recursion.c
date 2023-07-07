/**
 * _pow_recursion - gets the power of x to y
 * @x: integer to get power of
 * @y: integer for the power
 * Return: power of x to y or -1 if y is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
