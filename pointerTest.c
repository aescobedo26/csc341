#include <stdio.h>
#include <stdlib.h>

//global
int x;
int y = 12;

//main func
int main(int argc, char *argv[])
{
// local
	int i;
	int z = 0;

// array
	int array[10] = {0};

// pointer
	int *pointer1;
//pointer is now equal to the address of varible z
	pointer1 = &z;

	printf("The value of variable z is %d\n",z);
	printf("The address of z is %p\n", &z);
	printf("The value of pointer1= %p which is the smae as the address of z which is %p\n", pointer1, &z);

	for (i = 0;i<10; i++){
		printf("array[%d]=%d with address of %p\n", i, array[i],&array[i]);
	}
	return EXIT_SUCCESS;
}
