#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *argstostr - a function that concatenates all the arguments
 * of your program.
 *
 * @ac: integer
 *
 * @av: pointor of pointor (char)
 *
 *Return: character
 *
 */

char *argstostr(int ac, char **av)
{
int i, j, size_s = 0, len = 0;
char *ar;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; (av[i][j]); j++)
len++;
}
len += ac;
ar = malloc(sizeof(char) * len + 1);
if (ar == NULL)
return (NULL);
for (i = 0; i < ac ; i++)
{
for (j = 0; av[i][j]; j++)
{
ar[size_s] = av[i][j];
size_s++;
}
if (ar[size_s] == '\0')
{
ar[size_s++] = '\n';
}
}
return (ar);
}
