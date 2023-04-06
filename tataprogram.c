#include <stdio.h>

int main()
{
  int a[] = { 1, 2, 3, 4};

  short* b = (short *)a;
  printf("%d %d %d %d\n", b[0], b[1], b[2], b[3]);

  char* c = (char *)a;
  printf("%d %d %d %d\n", c[0], c[1], c[2], c[3]);
}
