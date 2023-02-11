#include <stdio.h>
#include <time.h>
#include <stdlib.h> 

int main()
{
  int list[10];
  int i, j,z ;
  int lower = 1, upper = 6;

   for (int u = 0; u < 10; u++)
   {
  
    int num = (rand() % (upper - lower + 1)) + lower;
    list[u]=num;
   }
   
   
   for (int x=0; x<10 ;x++)
   {
    printf("%d ",list[x]);
   }

  
  
  for (z=0; z<9 ;z++)
  {
    for(i=0; i<9 ;i++)
    {
      if(list[i]>=list[i+1])
      {
        j=list[i+1];
        list[i+1]=list[i];
        list[i]=j;

      }
    }
  }
 for (int k=0; k<10 ;k++)
 {
  printf("%d ",list[k]);
 }

    
  
  
}