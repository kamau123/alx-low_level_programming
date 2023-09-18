#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int Str_length = 0;
	int a;

	while(*s != 0)
	{
		Str_length++;
		s++;
	}
	s--;
	for(a = Str_length; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
