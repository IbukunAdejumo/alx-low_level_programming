#include <stdlib.h>
#include "main.h"

/**
 * *argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: Pointer to the new string (Success), NULL (Error)
 * argstostr - concatenates all arguments of program.
 * @ac: argument count
 * @av: pointer to argument vectors
 * Return: pointer to new buffer with all arguments as 1 string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;
	int bufferlen;
	char *p;

	if (ac == 0 || av == NULL)
		if (ac == 0)
			return (NULL);
	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		i = j = len = bufferlen = 0;
	for (i = 0; av[i]; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			for (j = 0; av[i][j]; j++)
				len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		p = (char *)malloc(len * sizeof(char) + ac + 1);
	if (p == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
		for (i = 0; av[i]; i++)
		{
			for (j = 0; av[i][j] != '\0'; j++)
			{
				str[k] = av[i][j];
				k++;
			}
			str[k] = '\n';
			k++;
			for (j = 0; av[i][j]; j++, bufferlen++)
				p[bufferlen] = av[i][j];
			p[bufferlen] = '\n';
			bufferlen++;
		}

	return (str);
	p[bufferlen] = '\0';
	return (p);
}
