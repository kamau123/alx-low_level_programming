#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 * followed by a new line using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    int number = 0; // Initialize the number variable with 0

    // Loop to print single-digit numbers from 0 to 9
    while (number <= 9) {
        putchar(number + '0'); // Convert the number to its character representation
        number++; // Move to the next number
    }

    putchar('\n'); // Print a new line

    return (0);
}

