#include "main.h"
#include <stdio.h>
void print_number(int num)
{
	int nd = 0;
	int nascii = 48;
	
	while (nascii < 58)
	{
		if (nd == num)
		{
			_putchar(nascii);
			break;
		}
		nascii++;
		nd++;
	}
}

int main(void)
{
	int n = 0;
	int last_no;
	int remaining_no;
	int first_no;

	if (n < 10) 
	{
		print_number(n);
	}
	else
	{
		last_no = n % 10;
		remaining_no = (n - last_no) / 10;
		if (remaining_no < 10)
		{
			first_no = remaining_no;
			print_number(first_no);
			print_number(last_no);
		}
		else
		{


	}

	_putchar('\n');
	return (0);
}
