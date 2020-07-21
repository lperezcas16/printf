#include "holberton.h"
/**
*print_binary - Funtion that return the decimal in binary
*
*@a: integer7
*
*Return: Char
*/
char *print_binary(va_list a)
{
	char *ptn = return_binary(va_arg(a, int));

	return (ptn);
}
/**
*return_binary - Return the decimal in to binary number
*
*@n: integer to convert
*
*Return:  the number in binary
*/
char *return_binary(int n)
{
	char *a, *new_space;
	int i = 0, j, k, base = 2;
	int f = n;

	while (f > 0)
	{
		f /= base;
		++i;
	}
	if (f == 0)
	{
		new_space = "0";
		return (new_space);
	}
	a = malloc(sizeof(char) * (i + 1));
	new_space = malloc(sizeof(char) * (i + 1));
	if (!new_space || !a)
	{
		free(a);
		free(new_space);
		return (NULL);
	}
	i = 0, k = 0, f = n;
	while (f > 0)
	{
		a[i] = f % base + 48;
		f /= base;
		++i;
	}
	for (j = i - 1; j >= 0; j--, k++)
	{
		new_space[k] = a[j];
	}
	new_space[k] = '\0';
	return (new_space);
}
/**
*print_hexa - Print the hexadecimal
*
*@a: The list
*
*Return: the pointer
*/
char *print_hexa(va_list a)
{
	char *ptn = return_hexa(va_arg(a, int));

	return (ptn);
}
/**
*return_hexa - convert a decimal in to hexadecimal
*@n: integer to convert
*
*Return: the hexadecimal
*/
char *return_hexa(int n)
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
