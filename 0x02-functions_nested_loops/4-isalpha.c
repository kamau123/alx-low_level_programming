/**
 *  function that checks for alphabetic character.
 *  Prototype: int _isalpha(int c);
 *  Returns 1 if c is a letter, lowercase or uppercase
 *  Returns 0 otherwise
 */

int _isalpha(int c)
{
	char lowercase_letters[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase_letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i;

    // Check if c is a lowercase letter
    for (i = 0; lowercase_letters[i] != '\0'; i++)
    {
        if (c == lowercase_letters[i])
        {
            return 1;
        }
    }

    // Check if c is an uppercase letter
    for (i = 0; uppercase_letters[i] != '\0'; i++)
    {
        if (c == uppercase_letters[i])
        {
            return 1;
        }
    }

    // If c is not a letter, return 0
    return 0;
}
