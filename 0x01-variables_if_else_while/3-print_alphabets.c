#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase and uppercase alphabet followed by a new line
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'a'; // Initialize the letter variable with 'a'

    // Loop to print lowercase letters from 'a' to 'z'
    while (letter <= 'z')
    {
        putchar(letter); // Print the current letter
        letter++; // Move to the next letter
    }

    letter = 'A'; // Reset letter to 'A' for uppercase

    // Loop to print uppercase letters from 'A' to 'Z'
    while (letter <= 'Z')
    {
        putchar(letter); // Print the current letter
        letter++; // Move to the next letter
    }

    putchar('\n'); // Print a new line

    return (0);
}

