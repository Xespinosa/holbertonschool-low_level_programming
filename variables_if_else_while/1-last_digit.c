#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * lastDigit - find last number
 * @n: random number  variable
 * Return: 0
 */
int lastDigit(int n)
{
	int lastDigit = n % 10;

	return (lastDigit);

}

/**
 * main - prints the last digit
 * Return: always 0
 */

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = lastDigit(n);
	printf("Last digit of %d is %d and is ", n, last_digit);
	if ((last_digit < 6) & (last_digit != 0))
	{
		printf("less than 6 and not 0\n");
	}
	else if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
