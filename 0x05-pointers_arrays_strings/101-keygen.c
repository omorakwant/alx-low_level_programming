#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 * program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
    char password[84];
    int index = 0, sum = 0, diff_half1, diff_half2;

    srand(time(0));

    while (sum < 2772)
    {
        password[index] = rand() % 94 + 33;
        sum += password[index++];
    }

    password[index] = '\0';

    if (sum != 2772)
    {
        diff_half1 = (sum - 2772) / 2;
        diff_half2 = (sum - 2772) / 2 + (sum - 2772) % 2;

        if (diff_half1 > diff_half2)
            password[index - 1] -= diff_half1;
        else
            password[index - 1] += diff_half2;
    }

    printf("%s", password);

    return (0);
}
		   
