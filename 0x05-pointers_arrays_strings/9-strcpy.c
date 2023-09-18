#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
    int l = 0;
    int x = 0;

    /* Calculate the length of the source string */
    while (*(src + l) != '\0')
    {
        l++;
    }

    /* Copy each character from src to dest */
    for (; x < l; x++)
    {
        dest[x] = src[x];
    }

    /* Null-terminate the destination string */
    dest[l] = '\0';

    /* Return a pointer to the destination string */
    return (dest);
}

