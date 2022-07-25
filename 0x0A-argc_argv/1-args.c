#include <stdio.h>
/**
* main -  Prints name of file
* @argc: arguement count
* @argv: arguments entered
* Description: print number of arguments
* Return: 0
**/
int main(int argc, char *argv[])
{
	*argv = *argv;
	printf("%d\n", argc - 1);
	return (0);
}
