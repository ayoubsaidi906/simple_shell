#include "main.h"
/**
 * _path - function that constructs the full path of an executable
 *@bin: binary
 *@path: default path
 *@full:the full path
 *Return: -
 */
void path_e(char *bin, char *path, char **fulll)
{
	if (bin[0] == '/')
	{
		*full = malloc(strlen(bin) + 1);
		strcpy(*fulll, bin);

	}
	else
	{
		*full = malloc(strlen(path) + strlen(bin) + 1);
		strcpy(*fulll, path);
		strcat(*fulll, bin);

	}
	
}
