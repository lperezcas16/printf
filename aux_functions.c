#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * str_ln - calcualte the lenght of a string
 * @p: the string to messure
 * Return: the lenght of the string
 */
int str_ln(char *p)
{
	int i = 0;

	while (*p)
		i++, p++;
	return (i);
}

/** 
 * rev_string - reverse a string
 * @s:string to reverse
 * Return: the string reverser
 */
void rev_string(char *s)
{
	int  back, front, len;
	char aux;

	front = 0;
	len = str_ln(s);
	back = len - 1;
	while (back >= len / 2)
	{
		aux = *(s + front);
		*(s + front) = *(s + back);
		*(s + back) = aux;
		back--;
		front++;
	}
}
/**
 * convertBase - converts a int
 * into a string with a specificl base
 * @number: the number to convert
 * @base: the base to convert the number to (max base = 16)
 * Return: a pointer to the converted string
 */

char *convertBase(int number, unsigned int base)
{
	char *dict = "0123456789abcdef";
	int i = 0, negative = 0;
	char *org = malloc(1024);

	if (!org)
		return (NULL);
	if (number == 0)
		org[i] = '0', i++;
	if (number < 0)
	{
		number = number * -1;
		negative = 1;
	}
	while (number != 0)
	{
		org[i] = dict[number % base];
		number = number / base;
		i++;
	}
	if (negative == 1)
		org[i] = '-', i++;
	org[i] = '\0';
	rev_string(org);
	return (org);
}
