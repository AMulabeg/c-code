#include <stdio.h>
#include <stdlib.h>

void swap(int *list, int pos1, int pos2)
{
  int temp=list[pos1];
  list[pos1]=list[pos2];
  list[pos2]=temp;
}

void bubblesort(int *list, int len)
{
  for(int x=len-1;x>0; x--)
  {
    for(int y=0; y<x;y++)
    {
      if(list[y]>list[y+1])
      {
        swap(list, y, y+1);
      }
    }
  }
  printf("Sorted list: ");
  for (int j=0; j<len;j++)
  {
    printf("%d ", list[j]);
  }

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
  bubblesort(new_list, len);

  free(new_list);
} 
