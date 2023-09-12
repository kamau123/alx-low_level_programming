#include "main.h"
/**
 * Write a function that checks for lowercase character
 * Prototype: int _islower(int c)
 * 
 * Returns 1 if c is lowercase
 *
 * Returns 0 otherwise
 * main - check the code.
 *
 */
int _islower(int c)
{
    char lowercase_Letters[] = "abcdefghijklmnopqrstuvwxyz";
    int i;

    for (i = 0; i < 26; i++)
    {
        if (c == lowercase_Letters[i])
        {
            return (1);
        }
    }

    return (0); 
}

