#include "main.h"






int _printf(const char *format, ...)
{
	va_list myCharacter;
	if (format == NULL)
	{
	return (- 1);
	}
	va_start(myCharacter, format);
	int i = vprintf(format, myCharacter);
	va_end (myCharacter);
 return (i);




}
int main(void)
{
	_printf("okay\n");
}
