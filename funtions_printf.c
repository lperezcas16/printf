#include "holberton.h"

char *print_char(va_list a)
{
	
}
/**
*return_binary - Funtion that return the decimal but in binary
*
*@n: integer
*Return: Char
*/
/*
char *return_binary(int n)
{
	char *new_space, *copy_a;
	int i = 0, j, k, base = 2;
	int f = n;

	while (f > 0)
	{
		f /= base;
		++i;
	}
	if (f == 0)
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
	i = 0, k = 0, f = n;
	while (f > 0)
	{
		new_space[i] = f % base + 48;
		f /= base;
		++i;
	}
	for (j = i - 1; j >= 0; j--, k++)
	{
		copy_a[k] = new_space[j];
	}
	copy_a[k] = '\0';
	return (copy_a);
}
char *print_char(va_list a){}
char *print_string(va_list a){}
char *return_integer(int n){}
char *print_integer2(va_list, int count, int n){}
char *print_int(va_list a){}
char *print_binary(va_list a){}
char *print_hexa(va_list a){}
char *return_hexa(int n){}
char *print_Hexa(va_list a){}
char *return_Hexa(int n){}
char *print_octal(va_list a){}
char *return_octal(int n){}*/

