#include <stdio.h>
int main() {
  int len_list;
  printf("How long is the list ");
          scanf("%d", &len_list);

  int list[len_list];

  for (int i = 0; i < len_list; i++) {

    printf("Input the place: ");
    scanf("%d", &list[i]);
  }

  int maxi = 0;
  for (int j = 0; j < len_list; j++) {
    if (maxi < list[j]) {
      maxi = list[j];
    }
  }
  printf("The biggest number in the list is : %d", maxi);

  return 0;
}
