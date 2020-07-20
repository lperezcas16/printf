#include "holberton.h"
/**
*print_octal - Print the decimal in octal
*
*@a: va list
*
*Return: the number
*/
char *print_octal(va_list a)
{
	char *ptn = return_octal(va_arg(a, int));

	return (ptn);
}
/**
*return_octal - Return the decimal in octal
*
*@n: Integer to convert
*
*Return: the number in octal
*/
char *return_octal(int n)
{
	char *a = NULL, *new_space = NULL;
	int i = 0, j, k, base = 8;
	int number = n;

	while (number > 0)
	{
		number /= base;
		++i;
	}
	a = malloc(sizeof(char) * (i + 1));
	new_space = malloc(sizeof(char) * (i + 1));
	if (!new_space || !a)
	{
		free(a);
		free(new_space);
		return (NULL);
	}
	i = 0, k = 0, number = n;
	while (number > 0)
	{
		a[i] = number & (base + 48);
		number /= base;
		++i;
	}
	for (j = i - 1; j >= 0; j--, k++)
	{
		new_space[k] = a[j];
	}
	new_space[k] = '\0';
	return (new_space);
}
