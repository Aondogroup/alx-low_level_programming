#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 *
 * @s: Pointer to the string whose length is to be calculated.
 *
 * Description:
 * This function takes a pointer to a character array (C string) as input
 * and recursively calculates the length of the string.
 * It counts the number of characters in the string until it reaches the
 * null-terminating character ('\0'), at which point it stops the recursion.
 *
 * Return: The length of the string (an integer).
 *
 * FYI: The standard library provides a similar function named 'strlen'.
 */
int _strlen_recursion(char *s)
{
    if (*s == '\0') // Base case: If the end of the string is reached,
    {
        return 0; // Return 0 to indicate the length of an empty string.
    }

    return 1 + _strlen_recursion(s + 1); // Add 1 to the length and call the function recursively with the next character in the string.
}

