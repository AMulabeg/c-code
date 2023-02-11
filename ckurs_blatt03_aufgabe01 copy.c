#include<stdio.h>
#include <stdlib.h>
int main ()
 {
	int breite = 6;
	int hoehe = 3

	
	for(int i=0; i<hoehe;i++)
	{
	
		printf("%c", 'A');
		for(int j=0; j<breite;j++)
		{
			if(i==0 || i==hoehe)
			{
				printf("%c",'A' );
			}
			else
			{
				printf("%c",'B' );
			}
			
		}
		printf("%c \n", 'A');
	}

	return 0;

 }
