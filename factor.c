#include "main.h"

/**
 * factor - function that factorizes the test numbers
 * @buffer: pointer to the test numbers
 *
 * Return: 0
 */

int factor(char *buffer)
{
	int digit, count;

	digit = atoi(buffer);

	for (count = 2; count <= sqrt(digit); count++)
	{
		if (digit % count == 0)
		{
			printf("%d=%d*%d\n", digit, digit / count , count);
			break;
		}
	}
	return (0);
}
