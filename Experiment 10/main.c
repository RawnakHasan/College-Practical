#include <stdio.h>

int main() {
  int n, sum = 0, i;

  printf("Enter a positive integer number = ");
  scanf("%d",&n);

  for (i = 1; i <= n; i += 1) {
    sum += i;
  }

  printf("Result = %d\n", sum);

  return 0;
}