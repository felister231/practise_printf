#include "main.h"

/**
 * _printf - prints output according to format
 * @format: format string
 * Return: Number of character
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i;
	char *str;
	int val;

	va_start(ap, format);
	i = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				val = va_arg(ap, int);
				printf("%c", val);
			}
			else if (format[i] == 's')
			{
				str = va_arg(ap, char*);
				if (str != NULL)
					printf("%s", str);
				else if (str == NULL)
					printf("%s", "(nil)");
			}
			else if (format[i] == '%')
				_putchar('%');
			else
				_putchar(format[i]);
			i++;
		}
		else
		{
			_putchar(format[i]);
		}
		i++;
	}
	va_end(ap);
	return (i);
}
