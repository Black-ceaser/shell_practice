#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - A progrma that compares strings
 * Return: (void)
 */
int main(void)
{
	char *strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
	char *s = (char *)malloc(100 * sizeof(char));

	if (s == NULL)
	{
		fprintf(stderr, "Memory allocation failed");
		return (1);
	}

	
	printf("Enter a word: ");
	scanf("%s", s);
	
	for (int i = 0; i < 6; i++)
	{
		if(strcmp(strings[i], s) == 0)
		{
			printf("Found\n");
			free(s);
			return (0);
		}
	}
	printf("Not found\n");
	free(s);
	return (1);
}
