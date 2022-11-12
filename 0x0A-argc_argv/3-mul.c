#include <stdio.h>

/**
 * main-this is a function to print its name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
int i, j;

if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
else
{
j = i;

for (i = 1; i < 3; i++)
j *= atoi(argv[i]);

printf("%d\n", j);
}

return (0);
}
