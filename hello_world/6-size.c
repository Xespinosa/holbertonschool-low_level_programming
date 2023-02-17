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

	printf("Size of a char: %zu byte(s) \n", sizeof(charType));
	printf("Size of an int: %zu byte(s) \n", sizeof(intType));
	printf("Size of a lont int: %zu byte(s) \n", sizeof(longintType));
	printf("Size of a long long int: %zu byte(s) \n", sizeof(longlongintType));
	printf("Size of a float: %zu byet(s) \n", sizeof(floatType));

	return (0);

}