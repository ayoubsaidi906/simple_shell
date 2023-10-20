#include "main.h"
/**
 * print_env - this function is used to print all environment in the program
 *
 */
void print_env(void)
{
	int k;
	char **env = environ;

	for (k = 0; env[k] != NULL; k++)
	{
		printf("%s\n", env[k]);
	}
}
/**
 * tokenize_string - tokenizes a string into
 *@line: store the user input command
 *@arg: store the tokenized command arg
 *Return: b
 */
int tokenize_string(char *line, char **arg)
{
	int b;
	b = 0;
	char *token = strtok(line, " \n");

	while (token != NULL && b < 10)
	{
		arg[b] = token;
		b++;
		token = strtok(NULL, " \n");
	}

	arg[b] = NULL;

	return (b);
}
