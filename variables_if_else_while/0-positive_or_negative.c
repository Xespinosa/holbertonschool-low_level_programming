#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print whether a random number is positive, negative or zero
 * return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 if (n=0)
        {
                echo "is zero \n";

	}
		else if (n>0)
                {
                        echo "is positive \n";

		}   
		   	else if (n<0)
                        {
                                echo "is negative \n";
                        }

	return (0);
}

