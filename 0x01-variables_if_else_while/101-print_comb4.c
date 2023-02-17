#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int j;
	int d;

	for (i = 0; i <= 8; i++)
	{
	for (j = 1 + i; j <= 9; j++)
	{
	for (d = 1 + j; d <= 9; d++)
	{
		putchar(i + '0');
		putchar(j + '0');
		putchar(d + '0');
	if (i < 7 || j < 8 || d < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
