#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			if (j > i)
			{
				for (k = 48; k < 58; k++)
				{
					if (k > j)
					{
						putchar(i);
						putchar(j);
						putchar(k);

						if (i == 55 && j == 56 && k == 57)
						{
							break;
						}

						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
