#include <stdio.h>

int main() {
  float F, C;

  printf("Temp. in F: ");
  scanf("%f", &F);

  C = (F-32)*5/9;
  printf("Temp. in C: %.2f°C\n", C);

  return 0;
}