#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *struct prnt - struct
 *
 *@flag:  Option
 *@prin_fun: Pointer to flag
 */

typedef struct prnt
{
	char flag;
	char* (*prin_fun)(va_list);
} print;

int str_ln(char *p);
void rev_string(char *s);
char *converToStrBase(int number, unsigned int base);
int _printf(const char *format, ...);
char *return_binary(int n);
char *print_char(va_list a);
char *print_string(va_list a);
char *return_integer(int n);
char *print_int(va_list a);
char *print_unsign_int(va_list a);
char *print_binary(va_list a);
char *print_hexa(va_list a);
char *return_hexa(int n);
char *print_Hexa(va_list a);
char *return_Hexa(int n);
char *print_octal(va_list a);
char *return_octal(int n);
#endif
