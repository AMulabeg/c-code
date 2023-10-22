#include <stdio.h>
int main(int argc, char *argv[]) {

  printf("Please put in an Intiger: ");
  int a;
  scanf("%d", &a);

  for (int i = 1; i < a; i++) {
    for (int j = 2; j <= i; j++) {
      if (i % j == 0 && i != j) {
        break;
      } else if (j == i) {
        printf("%d is a prime number. \n", i);
      }
    }
  }
}
