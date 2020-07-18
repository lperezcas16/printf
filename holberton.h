#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* struct prnt - struct 
* @flag: Binary Opytion
* @prin_fun: pointer to flag
*/

tydef struct prnt
{
         char flag;
         void (*prin_fun)();
} print;
#endif