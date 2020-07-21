#include "holberton.h"
#include <string.h>
/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the function Cmatch that will
 * determine which printing function to call
 * Return: buffer
 */
int _printf(const char *format, ...)
{
	char *buffer = NULL, *ch = NULL;
	va_list args;
	int i, Cmatch, m, final_c = 0;
	print match[] = {
		{'c', print_char},
		{'s', print_string},
		//{'d', print_int},
		//{'i', print_int},
		{'o', print_octal},
		{'x', print_hexa},
		{'b', print_binary},
		{'X', print_hexa},
		{'\0', NULL}
	};
	va_start(args, format);
	buffer = malloc(1024);
	if (buffer == NULL)
	{
		free(buffer);
		//return;
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		for (Cmatch = 0; match[Cmatch].flag != '\0'; Cmatch++)
		{
			if (format[i] == '%' && format[i + 1] == match[Cmatch].flag)
			{
				i++;
				ch = match[Cmatch].prin_fun(args);
				for (m = 0; ch[m]; m++, final_c++)
				{
					
					buffer[final_c] = ch[m];
				}
				break;

			}
			if (format[i] == '%' && format[i + 1] == '%')
			{
				i++;
				buffer[final_c] = format[i], final_c++;
			}
		}
		if (format[i] != match[Cmatch].flag)
			buffer[final_c] = format[i], final_c++;
		
	}
	
	buffer[final_c] = '\0';
	write(1, buffer, final_c);
	va_end(args);
	free(buffer);
	return (final_c);
}
