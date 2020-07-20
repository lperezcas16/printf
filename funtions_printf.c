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
	char *new_space, *copy_a;
	int i = 0, j, k, base = 2;
	int number = n;

	while (number > 0)
	{
		number /= base;
		++i;
	}
	if (number == 0)
	{
		copy_a = "0";
		return (copy_a);
	}
	new_space = malloc(sizeof(char) * (i + 1));
	copy_a = malloc(sizeof(char) * (i + 1));
	if (!copy_a || !new_space)
	{
		free(new_space);
		free(copy_a);
		return (NULL);
	}
	i = 0, k = 0, number = n;
	while (number > 0)
	{
		new_space[i] = number % base + 48;
		number /= base;
		++i;
	}
	for (j = i - 1; j >= 0; j--, k++)
	{
		copy_a[k] = new_space[j];
	}
	copy_a[k] = '\0';
	return (copy_a);
}
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
	int decimalNumber, quotient;
	int i = 0, j, temp;
	char *hexadecimalNumber = malloc(sizeof(char) * (i + 2));

	quotient = n;

	while (quotient != 0)
	{

	temp = quotient % 16;
	/*To convert integer into character*/
		(temp < 10) ? (temp = temp + 48) :
				(temp = temp + 55);
	hexadecimalNumber[i++] = temp;
	quotient = quotient / 16;
	}
	hexadecimalNumber[i] = '\0';
	return (hexadecimalNumber);
}
