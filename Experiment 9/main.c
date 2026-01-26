#include <stdio.h>

int main() {
  int L, S, R;

  printf("Enter large value: ");
  scanf("%d", &L);

  printf("Enter small value: ");
  scanf("%d", &S);

  while (S != 0) {
    R = L % S;
    L = S;
    S = R;
  }

  printf("GCD = %d\n", L);

  return 0;
}
