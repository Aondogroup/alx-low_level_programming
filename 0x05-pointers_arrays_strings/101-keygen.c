#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX_PASSWORD_LEN 32

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    char password[MAX_PASSWORD_LEN + 1];
    int i, rand_index;

    srand(time(NULL));

    /* Generate a random password */
    for (i = 0; i < MAX_PASSWORD_LEN; i++)
    {
        rand_index = rand() % (sizeof(charset) - 1);
        password[i] = charset[rand_index];
    }
    password[MAX_PASSWORD_LEN] = '\0';

    printf("%s\n", password);

    return (0);
}

