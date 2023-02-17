#include <stdio.h>
#include <stdlib.h>

int max_in_list(int * list, int len)
{
  int max=0;
  for(int x=0;x<len;x++)
  {
    if(max<=list[x])

    {
      max=list[x];
    }
  }
  return max;
}

void helper_list(int *list, int *help_list,int len, int max)
{

  for (int k=0; k<len;k++)
      {
        help_list[list[k]]=help_list[list[k]]+1;
      }

}

void countsort(int *list, int len, int max)
{
  int * help_list = calloc(max+1, sizeof(int));
  helper_list(list, help_list, len, max);
  int y=0;
  for(int a=0; a<=max; a++)
  {
    for (int b=0; b<help_list[a];b++)
    {
        list[y]=a;
        y++;
    }
  }

 for (int j=0; j<len; j++)
  {
    printf("%d ",list[j]); 

  }
  printf("\n"); 
  free(help_list); 
 }


int main(int argc, char *argv[])
{
  int len=0;
  printf("Length of Array: ");
  scanf("%d", &len);
  printf("\n");


  int * new_list =calloc(len, sizeof(int));

  for (int i=0; i<len; i++)
  {
    printf("Element on the %d position: ", i);
    scanf("%d", &new_list[i]);
    printf("\n");
  }
  
  printf("Unsorted list: ");

  for (int j=0; j<len; j++)
  {
    printf("%d ", new_list[j]); 
  }
  printf("\n"); 
  countsort(new_list, len, max_in_list(new_list, len));

  free(new_list);
}
