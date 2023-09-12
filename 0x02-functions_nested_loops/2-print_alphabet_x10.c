#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet 10 times, followed by a newline.
 *
 * Return: Always 0 (Success)
 */

/* Function prototype for _putchar */
int _putchar(char c)
{
    putchar(c);
    return (c);
}

/* Function prototype for print_alphabet_x10 */
void print_alphabet_x10(void);

int main(void)
{
    print_alphabet_x10();
    return (0);
}

/* Function definition for void print_alphabet_x10(void) */
void print_alphabet_x10(void)
{
    char letters[26] = "abcdefghijklmnopqrstuvwxyz";
    int i, j;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 26; j++)
        {
            _putchar(letters[j]);
        }
        _putchar('\n');
    }
}

