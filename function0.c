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
	char *name = "Felister Malitu";
	int age = 23;
	char *level = "university";
	double weight = 56.56;
	_printf("My name is %s , I am %d years old and i am currently in %s\n", name, age, level);
        _printf(" Oh I weigh %.2f. That is some tiny details about me.\n", weight);

}
