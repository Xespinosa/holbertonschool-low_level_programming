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
 	if (n>0)
	{
		 printf ("%n is positive \n",n);
	}   
		   	else if (n<0)
                        {
                                 printf ("%n is negative \n",n);
                        }
				 else 
        			{
                			printf ("%n is zero \n",n);

        			}


	return (0);
}

