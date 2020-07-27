#include "holberton.h"
/**
*print_Hexa - Print the hexadecimal
*
*@a: The list
*
*Return: the pointer
*/
char *print_Hexa(va_list a)
{
	char *ptn = return_Hexa(va_arg(a, int));

	return (ptn);
}
/**
*return_Hexa - convert a decimal in to hexadecimal
*@n: integer to convert
*
*Return: the hexadecimal
*/
char *return_Hexa(int n)
{
	char *a = NULL, *hexanumber = NULL;
	int i = 0, j = 0, k = 0, base = 16;
	int number = n;

	while (number > 0)
	{
		number /= base;
		++i;
	}
	a = malloc(sizeof(char) * (i + 1));
	hexanumber = malloc(sizeof(char) * (i + 1));
	if (!hexanumber || !a)
	{
		free(a);
		free(hexanumber);
		return (NULL);
	}
	i = 0, k = 0, number = n;
	while (number > 0)
	{
		a[i] = number % base + 48;
		if (number % base > 9)
			a[i] = number % base + 48 + 7;
		number /= base;
		++i;
	}
	for (j = i - 1; j >= 0; j--, k++)
	{
		hexanumber[k] = a[j];
	}
	hexanumber[k] = '\0';
	return (hexanumber);
}
