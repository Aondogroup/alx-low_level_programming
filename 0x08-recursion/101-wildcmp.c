#include "main.h"

/**
 *  * wildcmp - Compares two strings with wildcard character '*'.
 *   * @s1: The first string.
 *    * @s2: The second string with possible wildcard '*'.
 *     *
 *      * Return: 1 if strings are identical, 0 otherwise.
 *       */
int wildcmp(char *s1, char *s2)
{
	    if (*s1 == '\0' && *s2 == '\0')
		            return 1; /* If both strings are empty, they are identical */

	        if (*s2 == '*')
			    {
				            if (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)))
						                return 1; /* If branch matches, return 1 */
					        }

		    if (*s1 == *s2)
			            return wildcmp(s1 + 1, s2 + 1); /* If characters match, move to next */

		        return 0; /* If no match, return 0 */
}

