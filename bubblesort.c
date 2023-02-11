#include <stdio.h>

int main()
{
	int list[5]={21,5,11,3,17};

	int len= 5;
	int temp=0;

	printf("Unsorted List: ");
	for(int x=0; x<len;x++)
	{
		printf("%d ", list[x]);
	}
	printf("\n");

	for(int i=len; i>0; i--)
	{

		for(int j=0; j<i-1; j++)
		{
			if (list[j]>list[j+1])
			{
				
				temp=list[j];
				list[j]=list[j+1];
				list[j+1]=temp;
				for(int y=0; y<len;y++)
				{
				printf("%d ", list[y]);
				}
				printf("\n");
				
			}
		}
	}



	/* printf("Sorted List: ");
	for(int y=0; y<len;y++)
	{
		printf("%d ", list[y]);
	}
	return 0;
	*/
}