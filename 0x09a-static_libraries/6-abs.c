/**
 * _abs - returns an absolute number
 * @n: number to be absoluted
 *
 * Return: the number as it is if is greater than 0
 *if number is negative,multiply by -1 then return the positive number
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
