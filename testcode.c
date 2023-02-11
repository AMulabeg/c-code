#include<stdio.h>

int main ()
 {
	int breite = 13;
	int hoehe = 0;

	
	for(int i=0; i<=hoehe+1;i++)
	{
		
		printf("%c", 'A');
		for(int j=0; j<breite;j++)
		{
			if(i==0 || i==hoehe+1)
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
