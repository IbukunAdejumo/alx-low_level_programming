#include "main.h"
/**
 * main - print_alphabet Entry point
 * Documentation: print_alphabet - prints the alphabet in lower case
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
