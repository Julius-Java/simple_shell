#include "main.h"

/*
 * main function
 *
 *
 *Return: void
 */
int main(void)
{
	char *buffer;
	size_t buff_size;
	int read;

	buffer = malloc(sizeof(size_t) * buff_size);

	while (1)
	{
		print("cisfun$: ");
		read = getline(&buffer, &buff_size, stdin);

		if (read != EOF)
		{
			printf("%s\n, buffer);
		}
	}
	return (0);
}
