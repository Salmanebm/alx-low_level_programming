#include <stdio.h>
#include <stdlib.h>
/*
 * main : print the name of the program
 * @argc, @argv : arguments count and vector 
 */
int main(int argc ,char* argv[])
{
	while (argc)
	{
		printf("%s\n",argv[0]);
		break;
	}
	return(0);
}
