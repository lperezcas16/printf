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
	char* (*prin_fun)(va_list);
} print;
int _printf(const char *format, ...);
void return_binary(int n);
void print_char(va_list a);
void print_string(va_list a);
void return_integer(int n);
void print_integer2(int count, int n);
void print_int(va_list a);
void print_binary(va_list a);
void print_hexa(va_list a);
void return_hexa(int n);
void print_Hexa(va_list a);
void return_Hexa(int n);
void print_octal(va_list a);
void return_octal(int n);
#endif
