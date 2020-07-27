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
	if (x == NULL)
		return ("(null)");
	return (x);
}
/**
 * print_int - print_string
 * @a: to print
 * Return: string
 */
char *print_int(va_list a)
{
	int i = va_arg(a, int);

	return (convertBase(i, 10));
}
/**
 * print_unsign_int - print_string
 * @a: to print
 * Return: string
 */
char *print_unsign_int(va_list a)
{
	int i = va_arg(a, int);

	return (convertBase(i, 10));
}
