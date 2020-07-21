#include "holberton.h"
/**
 * print_char - prints char
 * @a: char to concatenate to buffer
 * Return: char to concatenate to buffer
 */
char *print_char (va_list a)
{
	char strg[2];
	char *s;

	strg[0] = va_arg(a, int);
	strg[1] = '\0';
	s = strg;
	return (s);
}
/**
 * print_string - print_string
 * @a: to print
 * Return: string
 */
char *print_string(va_list a)
{
	char *x = NULL;

	x = va_arg(a, char *);
	return (x);
}
/**
 * print_int - prints integer
 * @a: type of format to print
 * Return: integer
 */
