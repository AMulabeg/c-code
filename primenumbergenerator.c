#include <stdio.h>
#include <math.h>



int main(int argc, char const *argv[])
{
	int num=125;
	int i=2;
	int array[100];
	int count=0;
	
	for (int x=0; x<100;x++)
    	{
        	for(int j=x;j<100;j=j+x+2)
        	{
            if (j!=1)
            {
            	while (num%j==0)
            	{
            		num=(num/j);
            		
            		array[count]=j;
            		printf("%d ", array[count]);
            		count++;

            	}
            }
            
            	
            
        	}
        }
            
	return 0;
}