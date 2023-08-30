#include "main.h"

/**
 *  * _strlen - Returns the length of a string.
 *   * @s: The input string.
 *    *
 *     * Return: The length of the string.
 *      */
int _strlen(char *s)
{
	    int length = 0;
	        while (*s != '\0')
			    {
				            length++;
					            s++;
						        }
		    return length;
}

/**
 *  * is_palindrome_helper - Helper function to check palindrome.
 *   * @s: The input string.
 *    * @start: The starting index.
 *     * @end: The ending index.
 *      *
 *       * Return: 1 if palindrome, 0 otherwise.
 *        */
int is_palindrome_helper(char *s, int start, int end)
{
	    if (start >= end)
		            return 1; /* If all characters checked, string is a palindrome */

	        if (s[start] != s[end])
			        return 0; /* If characters do not match, not a palindrome */

		    return is_palindrome_helper(s, start + 1, end - 1); /* Move to next characters */
}

/**
 *  * is_palindrome - Checks if a string is a palindrome.
 *   * @s: The input string.
 *    *
 *     * Return: 1 if palindrome, 0 otherwise.
 *      */
int is_palindrome(char *s)
{
	    int length = _strlen(s);
	        if (length <= 1)
			        return 1; /* An empty string or a single character is a palindrome */

		    return is_palindrome_helper(s, 0, length - 1); /* Call the helper function */
}

