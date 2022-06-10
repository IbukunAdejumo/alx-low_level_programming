#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @x: 1st integer
 * @y: 2nd integer
 * @z: 3rd integer
 * Return: largest number
 */

int largest_number(int x, int y, int z)
{
	int largest;

	if (x >= y && x >= z)
	{
		largest = x;
	}
	else if (y >= x && y >= z)
	{
		largest = y;
	}
	else
	{
		largest = z;
	}

	return (largest);
}
