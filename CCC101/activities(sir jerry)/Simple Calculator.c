#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }

    printf("\n");
    printf("+---Simple Calculator---+\n");
    printf("|  %d + %d = %d       |\n", a, b, a + b);
    printf("+-----------------------+\n");
    return 0;

}