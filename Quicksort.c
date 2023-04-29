#include <stdio.h>
#include <stdlib.h>
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
  quicksort(new_list, len);

  free(new_list);

}
