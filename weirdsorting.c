#include <stdio.h>
void printarray(int *array, int len)
{
  for(int i=0; i<len;i++)
  {
  printf("%d", array[i]);
  }
}
void function(int *array, int nr1, int nr2)
{
  if (nr1>nr2)
  {
    return; 
  }
  int a= (nr1+nr2)/2;
  function(array, nr1, a);
  function(array, a+1, nr2);
  if(array[nr2]>array[a])
  {
    int temp=array[nr2];
    array[nr2]=array[a];
    array[a]=temp;
    printarray(array, sizeof(array)/sizeof(int));
  }
  function(array,nr1,(nr2)-1);

}

int main(int argc, char *argv[])
{
  int array[5]={4,1,5,2,6};
  
  function(array, 4, 1);
  

}
