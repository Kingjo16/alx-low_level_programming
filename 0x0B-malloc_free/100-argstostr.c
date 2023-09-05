#include "main.h"
#include <stdlib.h>
/**
  *argstostr - Concatenates Arguments of the program
  *@ac: Argument Count
  *@av: Array pointer
  *Return: ac =0 or av null will be NULL 
  */
char *argstostr(int ac, char **av)
{
	int l, j, k, size;
	char *arg;

	size = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	l = 0;
	while (l < ac)
	{
		j = 0;
		while (av[l][j])
		{
			size++;
			j++;
		}
		size++;
		l++;
	}
	arg = malloc((sizeof(char) * size) + 1);
	if (arg == NULL)
		return (NULL);
	l = 0;
	while (l < ac)
	{
		j = 0;
		while (av[l][j])
		{
			arg[k] = av[l][j];
			j++;
			k++;
		}
		arg[k] = '\n';
		k++;
		l++;
	}
	arg[k] = '\0';
	return (arg);
}
