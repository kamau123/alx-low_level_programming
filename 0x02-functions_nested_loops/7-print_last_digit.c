#include "main.h"

/**
 * main - check the code
 *function that prints the last digit of a number
 *Returns the value of the last digit
 */

int print_last_digit(int);

int print_last_digit(int)
{
	int last_digit;

    if (n < 0)
        n = -n; // Ensure n is positive to extract the last digit

    last_digit = n % 10; // Calculate the last digit

    printf("%d", last_digit); // Print the last digit

    return last_digit;
}
