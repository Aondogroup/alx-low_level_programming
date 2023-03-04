/**
 * leet - replaces certain characters with numbers to create 1337 text
 * @str: the string to convert
 *
 * Return: a pointer to the converted string
 */
char *leet(char *str)
{
char *s = str;
char *letters = "aAeEoOtTlL";
char *numbers = "4433007711";

while (*s)
{
int i;

for (i = 0; letters[i]; i++)
{
if (*s == letters[i])
{
*s = numbers[i];
break;
}
}
s++;
}
return (str);
}
