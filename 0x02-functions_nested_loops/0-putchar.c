#include "main.h"
/**
 * main -Entry point
 *
 * Return: 0
 */

int main(void)
{
	char x[] = "_putchar";
	int j;

	for (j = 0; j < 8; j++)
	{
		_putchar(x[j]);
	}
	_putchar('\n');
	return (0);
}
