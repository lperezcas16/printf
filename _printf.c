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
	char *buffer = NULL;
	va_list args;
	int i, j, Cmatch, m, final_c = 0;
	print match[] = {
		{'c', print_char},
		/**{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'o', print_octal},
		{'h', print_hexa},
		{'b', print_binary},*/
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
				for (m = 0; match[m].flag; m++, final_c++)
				{
					buffer[final_c] = match[m].flag;
				}
				break;
			}
		}
	}
	for (j = 0; j < i; j++)
	{
		buffer[j] = format[i];
	}
	buffer[j] = '\0';
	write(1, buffer, 1024);
	va_end(args);
	free(buffer);
	return (final_c);
}
