#include <stdio.h>

void makelist(int *list)
{
	int len_list;
	printf("How long is the list");
	scanf("%d", &len_list);
	
	int proxylist[len_list];

	for (int x=0; x<len_list;x++);
		printf("Input the place: %d", x);
		scanf("%d",&proxylist[x]);
		x++;
	*list=proxylist;

}

int find_max(list)
{
	
	int maxi=0;
	for (int j=0; j<10; j++)
	{
		if(maxi<list[j])
		{
			max=list[j];
		}
	}
	printf("The biggest number in the list is %d", maxi);
	return 0;

}
int main()
{
	int i[];
	makelist(&i);
	find_max(i);


}





