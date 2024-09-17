#include <stdio.h>
#include <stdlib.h>

int x;
int y = 15;

int main (int argc, char *argv[])
{
	int *values;
	int i;
	int z = 0;


	values = (int *)malloc(sizeof(int)*5);

	printf("Address of argc  is %p\n",&argc);
	printf("Address of local variable i in stack address is %p\n", &i);
	printf("Address of the heap variable is %p\n", values);
	printf("Address for the uninitialized variable x is %p\n", &x);
	printf("Address for initialized variable y is %p\n", &y);
	

	return EXIT_SUCCESS;
}
