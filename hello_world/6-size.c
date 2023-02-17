#include<stdio.h>

/**
 * main - prints sizes of multiple types
 * return:0
 */

int main () {
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %zu byte(s)", sizeof(charType));
	printf("Size of an int: %zu byte(s)", sizeof(intType));
	printf("Size of a lont int: %zu byte(s)", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s)", sizeof(longlongintType));
	printf("Size of a float: %zu byet(s)", sizeof(floatType));

	return (0);

}
