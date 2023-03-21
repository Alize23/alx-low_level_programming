#include <stdio.h>
/**
 * main - Entry point
 * Description - Write a C program that prints the size of various
 * types on the computer it is compiled and run on
 *
 * Return: 0 on (success)
 */
int main(void)
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
