#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 *struct prnt - struct
 *
 *@flag: Binary Opytion
 *@prin_fun: pointer to flag
 */

typedef struct prnt
{
	char flag;
	void (*prin_fun)();
} print;
int _printf(const char *format, ...);
char *return_binary(va_list, int n);
char *print_char(va_list a);
char *print_string(va_list a);
char *return_integer(int n);
char *print_integer2(va_list, int count, int n);
char *print_int(va_list a);
char *print_binary(va_list a);
char *print_hexa(va_list a);
char *return_hexa(int n);
char *print_Hexa(va_list a);
char *return_Hexa(int n);
char *print_octal(va_list a);
char *return_octal(int n);
#endif
