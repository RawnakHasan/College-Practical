#include <stdio.h>

int main() {
    int base, height;
    double area;

    printf("Enter the Value of Height: ");
    scanf("%d", &height);

    printf("Enter the Value of Base: ");
    scanf("%d", &base);

    area = (base * height) / 2;

    printf("Area: %.2f\n", area);

    return 0;
}
