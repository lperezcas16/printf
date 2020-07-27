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
	int i = va_arg(a, int);

	
	return(convertBase(i, 2));
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
	int i = va_arg(a, int);

	return(convertBase(i, 16));
}

