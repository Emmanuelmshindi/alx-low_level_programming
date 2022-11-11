#include <stdio.h>

/**
 * main-prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: array name
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
