/**
 * reverse_array - reverses the integers in an array
 * @a: array of integers to reverse
 * @n: number of integers to reverse
 */

void reverse_array(int *a, int n)
{
	int count, rcount;
	int temp_a[100];

	for (count = 0;  count < n; count++)
	{
		temp_a[count] = a[count];
	}
	for (rcount = 0; rcount < n; rcount++)
	{
		a[rcount] = temp_a[count - 1];
		count--;
	}
}
