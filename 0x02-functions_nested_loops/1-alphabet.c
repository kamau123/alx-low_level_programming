#include "main.h"
/**
 * function that prints the alphabet, in lowercase, followed by a new line.
 * 
 * main - check the code
 *
 * Return: Always 0.
 */

/* function defination*/

void print_alphabet(void)
{
	char letters[26]= "abcdefghijklmnopqrstuvwxyz";
	int i;

	for(i=0; i< 26; i++)
	{
		_putchar (letters[i]);
	}
	_putchar ('\n');
}
