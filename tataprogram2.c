#include <stdio.h>
void printlist(int *a, int len)
{
  printf("Next Number is %d: ", a[0]);
  for (long count = 0; count < len; count++)
  {
    for (long i=0; i<sizeof(int);i++)
    {
      char byte = *(((char *)&a[count])+i);
      for(long j=7; j>=0;j--)
      {
        char bit = (byte>>j) & 1;
        printf("%hhd", bit);
      }
        printf("  ");
   }
    
    printf("\n"); 
    if(count+1< len)
    {
      printf("Next Number is %d: ", a[count+1]);
    }
  }
 
}
int main()
{
  int a[] = { 1, 2, 3, 4};
  int test =10;
  short* b = (short *)a+1;
  printlist(a, 4);
  printf("-------------------------- \n");
  // printf("%d %d %d %d\n", b[0], b[1], b[2], b[3]);
  char* c = (char *)a+1;
//  printlist(c);
 //  printf("%d %d %d %d\n", c[0], c[1], c[2], c[3]);
}
