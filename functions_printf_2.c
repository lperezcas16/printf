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
	char *ptn = return_hexa(va_arg(a, int));

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
	int quotient = n;
	int i = 0, k = 0, j = 0, base = 16;
	char *hexadecimal = NULL, *number = NULL;

	while (quotient > 0)
	{
		quotient /= base;
		++i;
	}
	number = malloc(sizeof(char) * (1 + i));
	hexadecimal = malloc(sizeof(char) * (i + 1));
	if (!hexadecimal || !number)
	{
		free(number);
		free(hexadecimal);
		return (NULL);
	}
	i = 0, k = 0, quotient = n;
	while (quotient > 0)
	{
		number[i] = quotient % base + 48;
		if (quotient % base > 9)
			number[i] = quotient % base + 48 + 39;
		quotient /= base;
		++i;
	}
	for (j = i - 1; j >= 0; j--, k++)
	{
		hexadecimal[k] = number[k];
	}
	hexadecimal[i] = '\0';
	return (hexadecimal);
}
