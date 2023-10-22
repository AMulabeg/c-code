#include <stdio.h>

int main(int argc, char *argv[]) {
  int list[5] = {10, 2, 5, 15, 3};
  int new_list[5];
  for (int i = 0; i < 5; i++) {
    int temp = list[i];
    int sum = 0;
    while (temp % 10 != 0) {
      sum += temp % 10;
      temp = temp / 10;
    }
    sum += temp % 10;
    new_list[i] = sum;
  }
  for (int j = 0; j < 5; j++) {
    for (int k = 0; k < 4; k++) {
      if (new_list[k] > new_list[k + 1]) {
        int temp;
        temp = new_list[k];
        new_list[k] = new_list[k + 1];
        new_list[k + 1] = temp;
        temp = list[k];
        list[k] = list[k + 1];
        list[k + 1] = temp;
      }
    }
  }
  for (int l = 0; l < 5; l++) {
    printf("%d \n", list[l]);
  }
}
