#include <stdio.h>
int main()
{
	int a=5;
	printf("Your number is %d \n",a );
	printf("The address is %p \n",&a );
	int* pointer=&a;
	printf("Your number is %d \n",*pointer);
	printf("The address is %p \n",pointer );
}
