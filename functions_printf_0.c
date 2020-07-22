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
	char *str, *binary_number;
	int i = 0, j, k, base = 2;
	int number = n;

	while (number > 0)
	{
		number /= base;
		++i;
	}
	if (number == 0)
	{
		binary_number = "0";
		return (binary_number);
	}
	str = malloc(sizeof(char) * (i + 1));
	binary_number = malloc(sizeof(char) * (i + 1));
	if (!binary_number || !str)
	{
		free(str);
		free(binary_number);
		return (NULL);
	}
	i = 0, k = 0, number = n;
	while (number > 0)
	{
		str[i] = number % base + 48;
		number /= base;
		++i;
	}
	for (j = i - 1; j >= 0; j--, k++)
	{
		binary_number[k] = str[j];
	}
	binary_number[k] = '\0';
	return (binary_number);
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
*Return: the hexadecimal lower case
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
