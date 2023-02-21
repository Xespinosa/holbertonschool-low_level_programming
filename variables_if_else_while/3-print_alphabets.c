#include <stdio.h>

/**
 * main - print the alphabet in upper and lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
        char t;

        for (t = 'a'; t <= 'z'; t++)
        {
                putchar(t);
        }

        putchar('\n');

	 for (t = 'A'; t <= 'Z'; t++)
        {
                putchar(t);
        }
        putchar('\n');

        return (0);
}

