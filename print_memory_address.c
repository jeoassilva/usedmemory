#include <stdio.h>

int main (int argc, char *argv[])
{
	int x = 25;
	int *y = &x;
	printf( "\n"
		"Displaying content and memory allocation address\n"
		"*******************************************************\n");
	printf("The content of the variable x is: %d\n",x);
	printf("The address of the variable x is: %p\n",y);
	return 0;
}
