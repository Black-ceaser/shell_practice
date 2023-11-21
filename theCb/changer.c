#include <stdio.h>
#include <stdlib.h>
/**
 * main - proving the fact of not changing an value of an arguments
 * Return: void
 */

void changer(int);

int main()
{
	int i;

	i = 5;
	printf("Before i = %d\n", i);
	changer(i);
	printf("After i = %d\n", i);
	exit(EXIT_SUCCESS);

}

void changer(int x)
{
	while (x != 0)
	{
		printf("changer: x = %d\n", x);
		x--;
	}
}
