#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char password[12];
    int i, sum = 0;
    time_t t;

    srand((unsigned) time(&t));

    for (i = 0; i < 11; i++)
    {
        password[i] = rand() % 10 + 48;
        sum += password[i];
    }

    password[i] = (sum % 79) + 48;

    printf("%s\n", password);

    return (0);
}

