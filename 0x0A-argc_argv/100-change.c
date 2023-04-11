#include <stdio.h>
#include <stdlib.h>

/**
  * main - a program that prints the minimum number
  * of coins to make change for an amount of money.
  * @argc : number of arguments
  * @argv : array of  string
  * Return: 0  or 1
  */

int main(int argc, char *argv[])
{
int num, j, cent;
int coins[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
printf("Error\n");
return (1);
}
num = atoi(argv[1]);
cent = 0;
if (num < 0)
{
printf("0\n");
return (0);
}

for (j = 0; j < 5 && num >= 0; j++)
{
while (num >= coins[j])
{
cent++;
num = num - coins[j];
}
}
printf("%d\n", cent);
return (0);
}
