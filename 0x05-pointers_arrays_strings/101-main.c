#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

int main(void)
{
    char password[LENGTH + 1];

    srand(time(NULL));
    generate_password(password);
    printf("%s\n", password);

    return 0;
}
