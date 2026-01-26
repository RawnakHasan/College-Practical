#include <stdio.h>

int main() {
  int A, B, C, largest;

  printf("Enter the Value of A: ");
  scanf("%d", &A);
  printf("Enter the Value of B: ");
  scanf("%d", &B);
  printf("Enter the Value of C: ");
  scanf("%d", &C);

  if (A >= B && A >= C)
    largest = A;
  else if (B >= A && B >= C)
    largest = B;
  else
    largest = C;

  printf("Largest number is: %d\n", largest);

  return 0;
}