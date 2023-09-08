#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse, followed by a new line
 * using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    char letter = 'z'; // Initialize the letter variable with 'z'

    // Loop to print the lowercase alphabet in reverse
    while (letter >= 'a') {
        putchar(letter); // Print the current letter
        letter--; // Move to the previous letter
    }

    putchar('\n'); // Print a new line

    return (0);
}

