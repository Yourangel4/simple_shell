#include <stdio.h>

/**
 * sum - gets the actual value of two integers
 * @num1: first arg
 * @num2: second arg
 * Return: returns the sum of two integers
 */
int sum(int num1, int num2)
{
	return (num1 + num2);
}

/**
 *main - tests code
 *
 *Return: 0
 */

int main(void)
{
	int n1 = 10, n2 = 5;

	printf("%d\n", sum(n1, n2));

	return (0);
}
