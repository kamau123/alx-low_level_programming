#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet from 'a' to 'z', excluding 'q' and 'e',
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a'; // Initialize the letter variable with 'a'

    // Loop to print lowercase letters from 'a' to 'z', excluding 'q' and 'e'
    while (letter <= 'z')
    {
        if (letter != 'q' && letter != 'e') // Exclude 'q' and 'e'
        {
            putchar(letter); // Print the current letter
        }
        letter++; // Move to the next letter
    }

    putchar('\n'); // Print a new line

    return (0);
}

