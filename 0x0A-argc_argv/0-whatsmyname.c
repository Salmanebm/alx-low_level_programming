#include <stdio.h>
#include <stdlib.h>
/*
 * main : print the name of the program
 *
 */
int main(int argc ,char* argv[])
{
	while (argc)
	{
		printf("%s\n",argv[0]);
		break;
	}
	return (0);
}
